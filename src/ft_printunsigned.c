/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:10:00 by abakhaev          #+#    #+#             */
/*   Updated: 2023/11/20 12:28:37 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_printunsigned(unsigned int n)
{
	char	unsigneddec[10];

	unsigneddec[0] = '0';
	unsigneddec[1] = '1';
	unsigneddec[2] = '2';
	unsigneddec[3] = '3';
	unsigneddec[4] = '4';
	unsigneddec[5] = '5';
	unsigneddec[6] = '6';
	unsigneddec[7] = '7';
	unsigneddec[8] = '8';
	unsigneddec[9] = '9';
	ft_putnbr_dec_recursive(n, unsigneddec);
}
