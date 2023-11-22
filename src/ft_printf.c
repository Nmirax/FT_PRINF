/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:42:14 by abakhaev          #+#    #+#             */
/*   Updated: 2023/11/22 10:38:03 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
//on va chercher le format a print
int	ft_searchformat(va_list args, const char format)
{
	if (format == 'c')
		ft_printchar(va_arg(args, int));
	else if (format == 's')
		ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		ft_printptr(va_arg(args, void *));
	else if (format == 'd')
		ft_printdecnbr(va_arg(args, int));
	else if (format == 'i')
		ft_printinteger(va_arg(args, int));
	else if (format == 'u')
		ft_printunsigned(va_arg(args, int));
	else if (format == 'x')
		ft_printhexlowcase(va_arg(args, void *));
	else if (format == 'X')
		ft_printhexmaj(va_arg(args, void *));
	else if (format == '%')
		ft_printpercent();
	return (0);
}

//cette fonction va etre la structure de notre code 
int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	if (!str)
		return (0);
	va_start(args, str);
	while (str[i])
	{
		if (str[i + 1] == '\0')
			return (-1);
		if (str[i] == '%')
		{
			len += ft_searchformat(args, str[i + 1]);
			i++;
		}
		else
			ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
