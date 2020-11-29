/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 15:17:49 by manmarti          #+#    #+#             */
/*   Updated: 2020/11/29 16:30:24 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int a;
	int b;

	a = 1;
	b = 1;
	while (b <= y)
	{
		while (a <= x)
		{
			if ((a == 1) && ((b == 1) || (b == y)))
				ft_putchar('o');
			else if ((a == x) && ((b == 1) || (b == y)))
				ft_putchar('o');
			else if ((a > 1 && a < x) && (b == 1 || b == y))
				ft_putchar('-');
			else if ((b > 1 && b < y) && (a == 1 || a == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		a = 1;
		b++;
	}
}
