/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:25:56 by mboyansa          #+#    #+#             */
/*   Updated: 2023/08/07 15:52:19 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./printf/ft_printf.h"

typedef struct s_stack
{
	int		stack_len;
	int		len_a;
	int		len_b;
	char	**args;
	int		*stack_a;
	int		*stack_b;
	int		*tmp;
	int		*fake_a;
}	t_stack;

long long int		ft_atoi(const char *str);

void				swap_a(t_stack *stacks);
void				swap_b(t_stack *stacks);
void				swap_s(t_stack *stacks);
void				rotate_a(t_stack *stacks);
void				rotate_b(t_stack *stacks);
void				rotate_r(t_stack *stacks);
void				rrotate_a(t_stack *stacks);
void				rrotate_b(t_stack *stacks);
void				rrotate_r(t_stack *stacks);
void				push_a(t_stack *stacks);
void				push_b(t_stack *stacks);

int					min_val(t_stack *stacks);
int					max_val(t_stack *stacks);
int					short_way(t_stack *stacks);

void				radix_sorting(t_stack *stacks);

char				*args_join(char **args, t_stack *stacks);
char				*ft_strjoin(char *s1, char *s2);

int					is_sorted_stack(t_stack *stacks);
void				string_check(char *str, t_stack *stacks);
void				ft_exit(t_stack *stack);
void				clean_exit(t_stack *stacks);
void				copy_tmp(t_stack *stacks);
void				five_or_less(t_stack *stacks);
void				indexing(t_stack *stacks);
void				sorting(t_stack *stacks);

void				attend_indexes(t_stack *stacks);
void				basic_check(char *str, t_stack *stacks);
int					ft_strlen(char *str);
void				number_check(char *str, t_stack *stacks);
int					ft_isalnum(char a);
char				*ft_strtrim(char *s1, char *set);
void				dupnum_check(t_stack *stacks);
void				*ft_calloc(size_t nelem, size_t elsize);
void				is_sorted(t_stack *stacks);
void				init_stack_str(char **args, t_stack *stacks);
char				**ft_split(char const *s, char c);
void				arg_check(char **args, t_stack *stacks, int len);
void				ft_bzero(void *s, unsigned int n);
int					arg_len(char **args);

#endif