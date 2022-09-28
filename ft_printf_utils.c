/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatifi <mlatifi@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:26:21 by mlatifi           #+#    #+#             */
/*   Updated: 2022/02/03 20:26:25 by mlatifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptrnbr(unsigned long int a)
{
	ft_putchar('0');
	ft_putchar('x');
	return (ft_putnbr_hex_ptr(a) + 2);
}

int	temp_u(unsigned int a)
{
	unsigned int	i;

	i = count_nbr_u(a);
	ft_putnbr_unsigned_int(a);
	return (i);
}

int	temp(unsigned long long int a)
{
	unsigned int	i;

	i = count_nbr(a);
	ft_putnbr(a);
	return (i);
}

int	count_nbr_u(unsigned int n)
{
	unsigned int	i;

	i = 1;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	count_nbrx(int n)
{
	unsigned int	i;

	i = 1;
	while (n != 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}
