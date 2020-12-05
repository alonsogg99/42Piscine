/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asign_coords.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:51:40 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/05 19:14:06 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_asign(char *cadena, char *array, int start, int end)
{
	int n;

	n = 0;
	while (start < end)
	{
		array[n] = cadena[start];
		n++;
		start += 2;
	}
}

void	ft_tab(void)
{
	char tab[4][4];
	int count;
	int end;

	count = 0;
	end = 0;
	while (end < 4)
	{
		while (count < 4)
		{
			ft_putchar('0');
			count++;
		}
		ft_putchar('\n');
		count = 0;
		end++;
	}
	end = 0;
}

int	main(void)
{
	char arr[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	char top[4];
	char bot[4];
	char right[4];
	char left[4];

	ft_asign(arr, top, 0, 8);
	ft_asign(arr, bot, 8, 16);
	ft_asign(arr, left, 16, 24);
	ft_asign(arr, right, 24, 32);

	ft_tab();

	return (0);
}
