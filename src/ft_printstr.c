/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:45:00 by abakhaev          #+#    #+#             */
/*   Updated: 2023/11/20 12:34:32 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_printstr(char *str)
{
	int	i;

	i = 0;
	while (!str)
		ft_printchar(str[i]);
	i++;
}
