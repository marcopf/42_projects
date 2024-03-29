/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:37:04 by mpaterno          #+#    #+#             */
/*   Updated: 2023/04/26 15:32:23 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	ft_hex_len(unsigned long long num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

int	ft_num_len(long num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

void	write_hex(unsigned int n, int switcher)
{
	char		*set;
	int			temp;

	if (switcher)
		set = "0123456789ABCDEF";
	else
		set = "0123456789abcdef";
	if (n < 16)
	{
		temp = n % 16;
		write(1, &set[temp], 1);
	}
	else
	{
		temp = n % 16;
		n /= 16;
		write_hex(n, switcher);
		write(1, &set[temp], 1);
	}
}

int	hex(unsigned int n, int switcher)
{
	write_hex(n, switcher);
	return (ft_hex_len(n));
}
