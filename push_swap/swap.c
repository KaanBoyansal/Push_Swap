/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 20:54:03 by mboyansa          #+#    #+#             */
/*   Updated: 2023/08/02 21:52:05 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_s(t_stack *stacks)
{
	int	tmp;
	int	flag;

	flag = 0;
	if (stacks->len_a >= 2)
	{
		tmp = stacks->stack_a[0];
		stacks->stack_a[0] = stacks->stack_a[1];
		stacks->stack_a[1] = tmp;
		flag = 1;
	}
	if (stacks->len_b >= 2)
	{
		tmp = stacks->stack_b[0];
		stacks->stack_b[0] = stacks->stack_b[1];
		stacks->stack_b[1] = tmp;
		flag = 1;
	}
	if (flag == 1)
		ft_printf("ss\n");
}

void	swap_a(t_stack *stacks)
{
	int	tmp;

	if (stacks->len_a >= 2)
	{
		tmp = stacks->stack_a[0];
		stacks->stack_a[0] = stacks->stack_a[1];
		stacks->stack_a[1] = tmp;
		ft_printf("sa\n");
	}
}

void	swap_b(t_stack *stacks)
{
	int	tmp;

	if (stacks->len_b >= 2)
	{
		tmp = stacks->stack_b[0];
		stacks->stack_b[0] = stacks->stack_b[1];
		stacks->stack_b[1] = tmp;
		ft_printf("sb\n");
	}
}
