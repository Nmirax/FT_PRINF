/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:29:47 by abakhaev          #+#    #+#             */
/*   Updated: 2023/11/23 10:56:06 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "../libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_printchar(int c);
int		ft_printhex(unsigned long n, char hex);
int		ft_printstr(char *str);
int		ft_printint(int n);
char	*ft_itoa_base(unsigned long n, char hex[16]);
int		ft_printptr(void *ptr);
int		ft_printpercent(void);
int		ft_printunsigned(unsigned int n);
char	*ft_decimal_itoa(unsigned int n);
#endif