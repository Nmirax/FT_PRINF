/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:29:47 by abakhaev          #+#    #+#             */
/*   Updated: 2023/11/16 18:55:34 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

void	ft_printchar(int c);
void	ft_putchar(int c);
void	ft_printstr(char *str);
void	ft_printstr(char *str);
void	ft_putnbr_hex_recursive(unsigned int n, char *hex_digits);
void	ft_printdecnbr(unsigned int n);
void	ft_putnbr_dec_recursive(unsigned int n, char *dec_digits);
void	ft_printptr(void *ptr);

#endif