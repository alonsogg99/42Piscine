/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 11:46:24 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/04 11:55:26 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char			*hexa;
	unsigned char	val;

	hexa = "0123456789abcdef";
	while (*str != '\0')
	{
		val = (unsigned char)*str;
		if (val < 32 || val > 126)
		{
			ft_putchar('\\');
			ft_putchar(hexa[val / 16]);
			ft_putchar(hexa[val % 16]);
		}
			else ft_putchar(*str);
		str++;
	}
}
