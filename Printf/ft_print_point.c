/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emekinci <emekinci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 02:48:00 by emekinci          #+#    #+#             */
/*   Updated: 2022/04/09 02:48:02 by emekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_len(unsigned long long a)
{
	int	len;

	len = 0;
	while (a != 0)
	{
		a /= 16;
		len++;
	}
	return (len);
}

void	ft_put_hexx(unsigned long long n)
{
	if (n >= 16)
	{
		ft_put_hexx(n / 16);
		ft_put_hexx(n % 16);
	}
	else
	{
		if (n > 9)
			ft_putchar(n - 10 + 'a');
		else
			ft_putchar(n + 48);
	}
}

int	ft_print_ptr(unsigned long long n)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	if (n == 0)
		len += write(1, "0", 1);
	else
		ft_put_hexx(n);
	return (hex_len(n) + len);
}
