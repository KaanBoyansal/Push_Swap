/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 21:15:27 by mboyansa          #+#    #+#             */
/*   Updated: 2023/08/02 21:30:04 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_val(t_stack *stacks)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stacks->stack_a[0];
	while (i < stacks->len_a)
	{
		if (tmp > stacks->stack_a[i])
			tmp = stacks->stack_a[i];
		i++;
	}
	return (tmp);
}

int	max_val(t_stack *stacks)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stacks->stack_a[0];
	while (i < stacks->len_a)
	{
		if (tmp < stacks->stack_a[i])
			tmp = stacks->stack_a[i];
		i++;
	}
	return (tmp);
}

int	short_way(t_stack *stacks)
{
	int	i;

	i = 0;
	while (stacks->stack_a[i] != min_val(stacks))
		i++;
	if (i <= stacks->len_a / 2)
		return (1);
	return (0);
}
