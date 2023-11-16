/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_dec_recursive.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:22:04 by abakhaev          #+#    #+#             */
/*   Updated: 2023/11/16 19:50:37 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

void	ft_putnbr_dec_recursive(unsigned int n, char *dec_digits)
{
	if (n >= 16)
	{
		ft_putnbr_dec_recursive(n / 10, dec_digits);
		ft_putnbr_dec_recursive(n % 10, dec_digits);
	}
	else
	{
		ft_putchar(dec_digits[n]);
	}
}
