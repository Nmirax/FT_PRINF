/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:59:31 by abakhaev          #+#    #+#             */
/*   Updated: 2023/11/16 19:50:21 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

void	ft_printptr(void *ptr)
{
	write(1, "0x", 2);
	ft_puthex((unsigned long long)ptr);
}
