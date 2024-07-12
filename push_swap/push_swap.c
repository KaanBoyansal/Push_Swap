/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:30:03 by mboyansa          #+#    #+#             */
/*   Updated: 2023/08/07 16:47:07 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clean_exit(t_stack *stacks)
{
	int	i;

	i = -1;
	if (stacks->args)
		while (stacks->args[++i])
			free(stacks->args[i]); 
	if (stacks->stack_a)
		free(stacks->stack_a);
	if (stacks->stack_b)
		free(stacks->stack_b);
	if (stacks->tmp)
		free(stacks->tmp);
	if (stacks->fake_a)
		free(stacks->fake_a);
	exit(0);
}

void	string_check(char *str, t_stack *stacks)
{
	str = ft_strtrim(str, " ");
	basic_check(str, stacks);
	number_check(str, stacks);
	stacks->args = ft_split(str, ' ');
	stacks->stack_len = arg_len(stacks->args);
	stacks->len_a = stacks->stack_len;
	stacks->len_b = 0;
	stacks->stack_a = malloc(sizeof(int) * stacks->stack_len);
	init_stack_str(stacks->args, stacks);
	dupnum_check(stacks);
	is_sorted(stacks);
	stacks->stack_b = malloc(sizeof(int) * stacks->stack_len);
	sorting(stacks);
	clean_exit(stacks);
}

void	arg_check(char **args, t_stack *stacks, int len)
{
	stacks->stack_len = len - 1;
	args[1] = args_join(args, stacks);
	string_check(args[1], stacks);
}

int	main(int a, char **args)
{
	t_stack	*stacks;

	stacks = ft_calloc(sizeof(t_stack), 1);
	if (a == 2)
		string_check(args[1], stacks);
	else if (a > 2)
		arg_check(args, stacks, a);
	clean_exit(stacks);
	return (0);
}
