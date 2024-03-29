/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:41:48 by mpaterno          #+#    #+#             */
/*   Updated: 2023/04/26 09:28:33 by mpaterno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

typedef struct e_stack{
	int	*list;
	int	placed_number;
	int	min_num;
}	t_stack;

typedef struct e_lis{
	int	**list;
	int	*lis;
	int	lis_len;
	int	list_len;
	int	index_i;
	int	index_max_val;
}	t_lis;

typedef struct e_stacks{
	t_stack	stack_a;
	t_stack	stack_b;
	t_lis	lis;
	int		list_len;
	int		average;
}	t_stacks;

char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(const char *s1, const char *s2);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strdup(const char *str);
char	*get_next_line(int fd);
void	avg(t_stacks *stacks);
void	fill_stack(t_stacks *stacks, char *str);
void	sa(t_stacks *stacks, int flag);
void	sb(t_stacks *stacks, int flag);
void	ss(t_stacks *stacks, int flag);
void	pa(t_stacks *stacks, int k, int flag);
void	pb(t_stacks *stacks, int k, int flag);
void	ra(t_stacks *stacks, int flag);
void	rb(t_stacks *stacks, int flag);
void	rr(t_stacks *stacks, int flag);
void	rra(t_stacks *stacks, int flag);
void	rrb(t_stacks *stacks, int flag);
void	rrr(t_stacks *stacks, int flag);
int		is_min(int *list, int len);
void	greedy(char *argv);
void	push_all_b(t_stacks *stacks);
int		is_in_between(t_stacks *stacks);
void	ascend(t_stacks *stacks);
void	sort(t_stacks *stacks);
long	ft_atoi(const char *str);
char	**ft_split(char const *str, char c);
int		duplicate_check(t_stacks *stacks);
void	finish(t_stacks *stacks);
int		str_check_no_e(char *str);
void	small_sort(t_stacks *stacks);
void	small_sort_for_medium(t_stacks *stacks);
int		is_sorted(t_stacks *stacks);
void	finish_no_e(t_stacks *stacks);
int		double_str_check(char **strs, int argc);
void	fill_stack_double(t_stacks *stacks, char **strs, int argc);

#endif
