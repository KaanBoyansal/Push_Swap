/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 20:50:56 by mboyansa          #+#    #+#             */
/*   Updated: 2023/08/02 20:57:04 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_r(t_stack *stacks)
{
	int	i;
	int	tmp;

	i = -1;
	tmp = stacks->stack_a[0];
	while (++i < stacks->len_a - 1)
		stacks->stack_a[i] = stacks->stack_a[i + 1];
	stacks->stack_a[i] = tmp;
	i = -1;
	tmp = stacks->stack_b[0];
	while (++i < stacks->len_b - 1)
		stacks->stack_b[i] = stacks->stack_b[i + 1];
	stacks->stack_b[i] = tmp;
	ft_printf("rr\n");
}

void	rotate_a(t_stack *stacks)
{
	int	i;
	int	tmp;

	i = -1;
	tmp = stacks->stack_a[0];
	while (++i < stacks->len_a - 1)
		stacks->stack_a[i] = stacks->stack_a[i + 1];
	stacks->stack_a[i] = tmp;
	ft_printf("ra\n");
}

void	rotate_b(t_stack *stacks)
{
	int	i;
	int	tmp;

	i = -1;
	tmp = stacks->stack_b[0];
	while (++i < stacks->len_b - 1)
		stacks->stack_b[i] = stacks->stack_b[i + 1];
	stacks->stack_b[i] = tmp;
	ft_printf("rb\n");
}
