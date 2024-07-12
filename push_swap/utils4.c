/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:55:55 by mboyansa          #+#    #+#             */
/*   Updated: 2023/08/03 16:48:09 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	is_sorted(t_stack *stacks)
{
	int	i;
	int	b;

	b = 0;
	i = 0;
	while (i < stacks->stack_len)
	{
		if (stacks->stack_a[i] < stacks->stack_a[i + 1] 
			&& stacks->stack_a[i + 1] != 0)
			b++;
		i++;
	}
	if (b == stacks->stack_len - 1)
		clean_exit(stacks);
}

void	init_stack_str(char **args, t_stack *stacks)
{
	int	len;
	int	i;

	i = -1;
	len = arg_len(args);
	while (++i < len)
	{
		if (ft_atoi(args[i]) >= -2147483648 && ft_atoi(args[i]) <= 2147483647)
			stacks->stack_a[i] = (int)ft_atoi(args[i]);
		else
			ft_exit(stacks);
	}
}

void	ft_bzero(void *s, unsigned int n)
{
	unsigned int	i;
	char			*c;

	i = 0;
	c = s;
	while (i < n)
		c[i++] = 0;
}

int	arg_len(char **args)
{
	int	i;

	i = 0;
	while (args[i])
		i++;
	return (i);
}
