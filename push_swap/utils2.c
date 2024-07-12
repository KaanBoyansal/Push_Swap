/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:09:05 by mboyansa          #+#    #+#             */
/*   Updated: 2023/08/02 17:18:41 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	if ((int)len - (int)start > ft_strlen((char *)s) && (start == 0
			|| (int)len > ft_strlen((char *)s)))
		ptr = malloc(ft_strlen((char *)s));
	else
		ptr = malloc(len + 1);
	if (!ptr)
		return (0);
	while (s[i])
	{
		if (i >= start && j < len)
			ptr[j++] = s[i];
		i++;
	}
	ptr[j] = '\0';
	return (ptr);
}

int	is_in_array(char s1, char *set)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (s1 == set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char *s1, char *set)
{
	int		i;
	int		len;
	int		k;
	int		j;
	char	*arr;

	i = 0;
	k = 0;
	len = ft_strlen((char *)s1);
	while (is_in_array(s1[i], (char *)set) && s1[i])
		i++;
	j = len - 1;
	while (j > i && is_in_array(s1[j], (char *)set))
		j--;
	arr = ft_substr(s1, i, j - i + 1);
	if (!arr)
		return (0);
	return (arr);
}

void	dupnum_check(t_stack *stacks)
{
	int	i;
	int	j;
	int	b;

	i = 0;
	while (i < stacks->stack_len)
	{
		j = 0;
		b = 0;
		while (j < stacks->stack_len)
		{
			if (stacks->stack_a[i] == stacks->stack_a[j])
				b++;
			j++;
		}
		if (b > 1)
			ft_exit(stacks);
		i++;
	}
}
