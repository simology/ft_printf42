/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatifi <mlatifi@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:26:48 by mlatifi           #+#    #+#             */
/*   Updated: 2022/02/03 20:26:50 by mlatifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		count_nbr(int n);
void	ft_putnbr(int n);
int		ft_putstr(char *str);
int		get_digits(int n);
void	ft_putnbr_unsigned_int(unsigned int n);
int		count_nbrx(int n);
int		ft_putptrnbr(unsigned long int a);
int		temp(unsigned long long int a);
int		temp_u(unsigned int a);
int		count_nbr_u(unsigned int n);
int		ft_putnbr_hex_x(unsigned int a);
int		ft_putnbr_hex_ptr(unsigned long int a);

#endif
