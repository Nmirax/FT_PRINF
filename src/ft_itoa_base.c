/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:06:54 by abakhaev          #+#    #+#             */
/*   Updated: 2023/11/23 10:57:01 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*ft_itoa_base(unsigned long n, char hex[16])
{
	int		i;
	char	*tab;
	char	*result;

	tab = ft_calloc(17, sizeof(char));
	if (!tab)
		return (NULL);
	i = 16;
	while (n)
	{
		tab[--i] = hex[n % 16];
		n /= 16;
	}
	result = ft_strdup(tab + i);
	free(tab);
	return (result);
}
