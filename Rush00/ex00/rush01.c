/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 15:47:03 by alogarci          #+#    #+#             */
/*   Updated: 2020/11/29 16:20:12 by alogarci         ###   ########.fr       */
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
			if (((a == 1) && (b == 1)) || ((a == x) && (b == y) &&
			(x > 1) && (y < 1)))
				ft_putchar('/');
			else if (((a == 1) && (b == y)) || ((a == x) && (b == 1)))
				ft_putchar(+92);
			else if (((b > 1 && b < x) && (a == 1 || a == x)) ||
			((b == 1 || b == y) && (a > 1 && a < x)) || (x == 1 || b == 1))
				ft_putchar('*');
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		a = 1;
		b++;
	}
}
