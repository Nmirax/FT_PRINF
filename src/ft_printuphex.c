/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuphex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:09:46 by abakhaev          #+#    #+#             */
/*   Updated: 2023/11/20 14:09:45 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_printuphex(unsigned int n)
{
	char	hex_digits[16];

	hex_digits[0] = '0';
	hex_digits[1] = '1';
	hex_digits[2] = '2';
	hex_digits[3] = '3';
	hex_digits[4] = '4';
	hex_digits[5] = '5';
	hex_digits[6] = '6';
	hex_digits[7] = '7';
	hex_digits[8] = '8';
	hex_digits[9] = '9';
	hex_digits[10] = 'A';
	hex_digits[11] = 'B';
	hex_digits[12] = 'C';
	hex_digits[13] = 'D';
	hex_digits[14] = 'E';
	hex_digits[15] = 'F';
	ft_putnbr_hex_recursive(n, hex_digits);
}
