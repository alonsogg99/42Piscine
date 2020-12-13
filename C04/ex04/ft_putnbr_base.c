/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 11:08:43 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/13 11:21:43 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_check_base(char *base)
{
	int i;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
	{
		return (0);
	}
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
		{
			return (0);
		}
		i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{

}
