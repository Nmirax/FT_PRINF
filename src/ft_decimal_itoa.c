/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_itoa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:35:25 by abakhaev          #+#    #+#             */
/*   Updated: 2023/11/23 10:57:06 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static	int	ft_len_itoa(unsigned int n)
{
	int	len;

	len = 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_decimal_itoa(unsigned int n)
{
	char	*tab;

	if (n == 0)
		return (ft_strdup("0"));
	tab = ft_calloc(ft_len_itoa(n) + 1, sizeof(char));
	if (!tab)
		return (NULL);
	while (n)
	{
		tab[ft_len_itoa(n) - 1] = (n % 10) + 48;
		n /= 10;
	}
	return (tab);
}
