/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 21:53:43 by mboyansa          #+#    #+#             */
/*   Updated: 2023/08/05 20:47:29 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sorting(t_stack *stacks)
{
	int	i;
	int	bit;
	int	tmp;

	bit = 0;
	while (is_sorted_stack(stacks) == 0 && bit < 32)
	{
		i = -1;
		tmp = stacks->len_a;
		while (++i < tmp)
		{
			if (((stacks->stack_a[0]) >> bit) & 1)
				rotate_a(stacks);
			else
				push_b(stacks);
		}
		while (stacks->len_b > 0)
			push_a(stacks);
		bit++;
	}
}
