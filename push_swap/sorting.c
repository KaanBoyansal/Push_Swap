/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:24:04 by mboyansa          #+#    #+#             */
/*   Updated: 2023/08/07 16:36:03 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting(t_stack *stacks)
{
	stacks->tmp = malloc(sizeof(int) * stacks->stack_len);
	indexing(stacks);
	if (stacks->stack_len <= 5)
		five_or_less(stacks);
	else
		radix_sorting(stacks);
}

void	indexing(t_stack *stacks)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	stacks->fake_a = malloc(sizeof(int) * stacks->stack_len);
	copy_tmp(stacks);
	while (i < stacks->stack_len)
	{
		j = 0;
		while (j < stacks->stack_len)
		{
			if (stacks->tmp[i] < stacks->tmp[j])
			{
				tmp = stacks->tmp[i]; 
				stacks->tmp[i] = stacks->tmp[j];
				stacks->tmp[j] = tmp;
			}
			j++;
		}
		i++;
	}
	attend_indexes(stacks);
}

void	attend_indexes(t_stack *stacks)
{
	int	i;
	int	j;

	i = 0;
	while (i < stacks->stack_len)
	{
		j = 0;
		while (j < stacks->stack_len)
		{
			if (stacks->tmp[i] == stacks->fake_a[j])
			{
				stacks->stack_a[j] = i;
				break ;
			}
			j++;
		}
		i++;
	}
}

void	copy_tmp(t_stack *stacks)
{
	int	i;

	i = 0;
	while (i < stacks->stack_len)
	{
		stacks->tmp[i] = stacks->stack_a[i];
		stacks->fake_a[i] = stacks->stack_a[i];
		i++;
	}
}

void	five_or_less(t_stack *stacks)
{
	if (stacks->len_a == 2)
		swap_a(stacks);
	while (stacks->len_a > 3)
	{
		if (short_way(stacks) == 1)
			while (stacks->stack_a[0] != min_val(stacks))
				rotate_a(stacks);
		else
			while (stacks->stack_a[0] != min_val(stacks))
				rrotate_a(stacks);
		push_b(stacks);
	}
	if (stacks->len_a == 3)
	{
		if (stacks->stack_a[0] == max_val(stacks))
			rotate_a(stacks);
		else if (stacks->stack_a[1] == max_val(stacks))
			rrotate_a(stacks);
		if (stacks->stack_a[0] > stacks->stack_a[1])
			swap_a(stacks);
	}
	while (stacks->len_b > 0)
		push_a(stacks);
}
