/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:29:47 by abakhaev          #+#    #+#             */
/*   Updated: 2023/11/20 18:39:58 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

int		ft_printchar(int c);
void	ft_printstr(char *str);
void	ft_putnbr_hex_recursive(unsigned int n, char *hex_digits);
void	ft_printdecnbr(unsigned int n);
void	ft_putnbr_dec_recursive(unsigned int n, char *dec_digits);
int		ft_printptr(unsigned int ptr);
void	ft_printhex(unsigned int n);
void	ft_printinteger(unsigned int n);
void	ft_printuphex(unsigned int n);
void	ft_putnbr_recursive(int n, char *digits);
void	ft_printunsigned(unsigned int n);
void	ft_printhexmaj(unsigned int n);
void	ft_printhexlowcase(unsigned int n);
void	ft_printpercent(unsigned int n);
int		ft_searchformat(va_list args, const char format);
int		ft_printf(const char *str, ...);
#endif