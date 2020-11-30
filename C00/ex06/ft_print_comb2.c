/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 11:26:16 by alogarci          #+#    #+#             */
/*   Updated: 2020/11/30 13:28:42 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_digit(char c)
{
	write(1, &c, 1);
}

void	ft_write_number(int n)
{
	if (n >= 10)
	{
		ft_write_digit(n / 10 + '0');
		ft_write_digit(n % 10 + '0');
	}
	else
	{
		ft_write_digit('0');
		ft_write_digit(n + '0');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a;
		while (b <= 99)
		{
			if (a != b)
			{
				ft_write_number(a);
				ft_write_digit(' ');
				ft_write_number(b);
				if (a != 98)
				{
					ft_write_digit(',');
					ft_write_digit(' ');
				}
			}
			b++;
		}
		a++;
	}
}
