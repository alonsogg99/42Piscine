/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 16:30:09 by mtorrado          #+#    #+#             */
/*   Updated: 2020/11/29 18:49:42 by alogarci         ###   ########.fr       */
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
			if ((b == 1) && ((a == 1) || (a == x)))
				ft_putchar('A');
			else if ((b == y) && ((a == 1) || (a == x)))
				ft_putchar('C');
			else if (((a > 1 && a < x) && (b == 1 || b == y)) ||
			((b > 1 && b < y) && (a == 1 || a == x)))
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
