/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   code.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:55:23 by alogarci          #+#    #+#             */
/*   Updated: 2020/11/28 13:13:46 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

int	main(void)
{
	int a, b, c;
	a = '0' -1;
	

	while(++a <= '9')
	{
		b = a;
		while(++b <= '9')
		{
			c = b + 1;
			while(c <= '9')
			{
			
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);


				if (a != '7' || b != '8' || c != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
					
				}
				c++;
			}
		}
	}

}
