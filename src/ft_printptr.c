/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:26:51 by abakhaev          #+#    #+#             */
/*   Updated: 2023/11/23 11:11:20 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printptr(void *ptr)
{
	int	len;

	len = 0;
	if (ptr == NULL)
		len += ft_printstr("0x0");
	else
	{
		len = ft_printstr("0x");
		len += ft_printhex((unsigned long)ptr, 'x');
	}
	return (len);
}
