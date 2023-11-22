/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdecnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:55:25 by abakhaev          #+#    #+#             */
/*   Updated: 2023/11/22 11:59:47 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printdecnbr(int n)
{
	int		len;
	char	*tab;

	len = 0;
	tab = ft_itoa(n);
	len = ft_printstr(tab)
		free(tab);
	return (len);
}
