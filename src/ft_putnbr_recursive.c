/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_recursive.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 19:47:50 by abakhaev          #+#    #+#             */
/*   Updated: 2023/11/20 12:35:10 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_putnbr_recursive(int n, char *digits)
{
	if (n < 0)
	{
		ft_printchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_recursive(n / 10, digits);
		ft_putnbr_recursive(n % 10, digits);
	}
	else
	{
		ft_printchar(digits[n]);
	}
}
