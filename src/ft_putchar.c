/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:47:14 by abakhaev          #+#    #+#             */
/*   Updated: 2023/11/16 12:47:51 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int c)
{
	write (1, &c, 1);
}