/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_recursive.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:04:13 by abakhaev          #+#    #+#             */
/*   Updated: 2023/11/16 19:50:45 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

void	ft_putnbr_hex_recursive(unsigned int n, char *hex_digits)
{
	if (n >= 16)
	{
		ft_putnbr_hex_recursive(n / 16, hex_digits);
		ft_putnbr_hex_recursive(n % 16, hex_digits);
	}
	else
	{
		ft_putchar(hex_digits[n]);
	}
}
