/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emekinci <emekinci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 02:48:16 by emekinci          #+#    #+#             */
/*   Updated: 2022/04/09 02:48:17 by emekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count(unsigned int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_uitoa(unsigned int n)
{
	char	*s;
	int		len;

	len = count(n);
	s = (char *)malloc(len + 1);
	s[len] = '\0';
	while (n != 0)
	{
		s[--len] = n % 10 + 48;
		n = n / 10;
	}
	return (s);
}

int	ft_print_unsigned(unsigned int n)
{
	char	*s;
	int		len;

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	s = ft_uitoa(n);
	len = ft_printstr(s);
	free(s);
	return (len);
}
