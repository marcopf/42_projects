/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:39:46 by mpaterno          #+#    #+#             */
/*   Updated: 2023/03/18 14:50:33 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_putnbr(int n);
int		ft_u_putnbr(unsigned int n);
int		ft_num_len(long num);
int		ft_hex_len(unsigned	long long num);
int		ft_putchar(int c);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *str);
void	ft_bzero(void *s, size_t n);
int		ft_putstr(const char *str);
int		c_write(int fd, const void *c, int n);
int		write_ptr(unsigned long long int n);
int		hex(unsigned int n, int switcher);
int		ft_u_putnbr(unsigned int n);
int		get_specifier(const char *str, va_list *args);

#endif
