/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:29:47 by abakhaev          #+#    #+#             */
/*   Updated: 2023/11/22 15:08:23 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>
# include "../libft/libft.h"

int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_searchformat(va_list args, const char format);
int		ft_printf(const char *str, ...);
int		ft_printdecnbr(int n);
char	*ft_itoa_base(unsigned long n, char hex[16]);
int		ft_printptr(void *ptr);
#endif