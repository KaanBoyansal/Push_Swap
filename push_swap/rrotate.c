/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 21:06:15 by mboyansa          #+#    #+#             */
/*   Updated: 2023/08/02 21:52:11 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotate_r(t_stack *stacks)
{
	int	i;
	int	tmp;

	i = stacks->len_a;
	tmp = stacks->stack_a[i - 1];
	while (--i > 0)
		stacks->stack_a[i] = stacks->stack_a[i - 1];
	stacks->stack_a[0] = tmp;
	i = stacks->len_b;
	tmp = stacks->stack_b[i - 1];
	while (--i > 0)
		stacks->stack_b[i] = stacks->stack_b[i - 1];
	stacks->stack_b[0] = tmp;
	ft_printf("rrr\n");
}

void	rrotate_a(t_stack *stacks)
{
	int	i;
	int	tmp;

	i = stacks->len_a;
	tmp = stacks->stack_a[i - 1];
	while (--i > 0)
		stacks->stack_a[i] = stacks->stack_a[i - 1];
	stacks->stack_a[0] = tmp;
	ft_printf("rra\n");
}

void	rrotate_b(t_stack *stacks)
{
	int	i;
	int	tmp;

	i = stacks->len_b;
	tmp = stacks->stack_b[i - 1];
	while (--i > 0)
		stacks->stack_b[i] = stacks->stack_b[i - 1];
	stacks->stack_b[0] = tmp;
	ft_printf("rrb\n");
}
