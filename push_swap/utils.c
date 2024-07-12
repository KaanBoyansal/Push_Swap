/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:45:21 by mboyansa          #+#    #+#             */
/*   Updated: 2023/08/07 16:40:08 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	number_check(char *str, t_stack *stacks)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') && str[i + 1] == '-')
			ft_exit(stacks);
		i++;
	}
}

int	ft_isalnum(char a)
{
	if (a > 47 && a < 58)
		return (1);
	else if (a == ' ')
		return (1);
	else if (a == '-')
		return (1);
	return (0);
}

void	basic_check(char *str, t_stack *stacks)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(ft_isalnum(str[i])))
			ft_exit(stacks);
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] == '-' && !(str[i + 1] >= '0' && str[i + 1] <= '9'))
			ft_exit(stacks);
		i++;
	}
}

void	ft_exit(t_stack *stacks)
{
	if (stacks->args)
		free(stacks->args); 
	if (stacks->stack_a)
		free(stacks->stack_a);
	if (stacks->stack_b)
		free(stacks->stack_b);
	if (stacks->tmp)
		free(stacks->tmp);
	if (stacks->fake_a)
		free(stacks->fake_a);
	ft_printf("Error\n");
	exit(0);
}
