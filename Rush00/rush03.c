/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 15:47:03 by alogarci          #+#    #+#             */
/*   Updated: 2020/11/29 10:10:52 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush03(int x, int y)
{
	int a;
	int b;

	a = 1;
	b = 1;
	while (b <= y)
	{
		while (a <= x)
		{
			if ((a == 1) && ((b == y) || (b == 1)))
				ft_putchar('A');
			else if ((a == x) && ((b == y) || (b == 1)))
				ft_putchar('C');
			else if (((b > 1 && b < x) && (a == 1 || a == x)) ||
			((b == 1 || b == y) && (a > 1 && a < x)) || (x == 1 || b == 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		a = 1;
		b++;
	}
}
