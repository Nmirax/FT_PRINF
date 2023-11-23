/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:07:57 by abakhaev          #+#    #+#             */
/*   Updated: 2023/11/23 11:10:55 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printhex(unsigned long n, char hex)
{
	char	*str;
	char	hex_low[17];
	char	hex_upp[17];
	int		len;

	ft_strlcpy(hex_low, "0123456789abcdef", 17);
	ft_strlcpy(hex_upp, "0123456789ABCDEF", 17);
	if (n == 0)
	{
		len = ft_printchar('0');
		return (len);
	}
	else if (hex == 'x')
		str = ft_itoa_base(n, hex_low);
	else
		str = ft_itoa_base(n, hex_upp);
	len = ft_printstr(str);
	free(str);
	return (len);
}
