/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexlowcase.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:33:16 by abakhaev          #+#    #+#             */
/*   Updated: 2023/11/20 12:28:23 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_printhexlowcase(unsigned int n)
{
	char	lowhex[16];

	lowhex[0] = '0';
	lowhex[1] = '1';
	lowhex[2] = '2';
	lowhex[3] = '3';
	lowhex[4] = '4';
	lowhex[5] = '5';
	lowhex[6] = '6';
	lowhex[7] = '7';
	lowhex[8] = '8';
	lowhex[9] = '9';
	lowhex[10] = 'a';
	lowhex[11] = 'b';
	lowhex[12] = 'c';
	lowhex[13] = 'd';
	lowhex[14] = 'e';
	lowhex[15] = 'f';
	ft_putnbr_hex_recursive(n, lowhex);
}
