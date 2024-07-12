/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 20:57:28 by mboyansa          #+#    #+#             */
/*   Updated: 2023/08/03 16:15:10 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack *stacks)
{
	int	i;

	i = stacks->len_a + 1;
	if (stacks->len_b <= 0)
		return ;
	while (--i >= 0)
		stacks->stack_a[i + 1] = stacks->stack_a[i];
	stacks->stack_a[0] = stacks->stack_b[0];
	i = -1;
	while (++i < stacks->len_b)
		stacks->stack_b[i] = stacks->stack_b[i + 1];
	stacks->len_a += 1;
	stacks->len_b -= 1;
	ft_printf("pa\n");
}

void	push_b(t_stack *stacks)
{
	int	i;

	i = stacks->len_b + 1;
	if (stacks->len_a <= 0)
		return ;
	while (--i >= 0)
		stacks->stack_b[i + 1] = stacks->stack_b[i];
	stacks->stack_b[0] = stacks->stack_a[0];
	i = -1;
	while (++i < stacks->len_a)
		stacks->stack_a[i] = stacks->stack_a[i + 1];
	stacks->len_a -= 1;
	stacks->len_b += 1;
	ft_printf("pb\n");
}
