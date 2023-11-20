/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexmaj.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:27:20 by abakhaev          #+#    #+#             */
/*   Updated: 2023/11/20 12:28:25 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_printhexmaj(unsigned int n)
{
	char	majhex[16];

	majhex[0] = '0';
	majhex[1] = '1';
	majhex[2] = '2';
	majhex[3] = '3';
	majhex[4] = '4';
	majhex[5] = '5';
	majhex[6] = '6';
	majhex[7] = '7';
	majhex[8] = '8';
	majhex[9] = '9';
	majhex[10] = 'A';
	majhex[11] = 'B';
	majhex[12] = 'C';
	majhex[13] = 'D';
	majhex[14] = 'E';
	majhex[15] = 'F';
	ft_putnbr_hex_recursive(n, majhex);
}
