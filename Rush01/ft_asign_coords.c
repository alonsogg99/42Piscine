/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asign_coords.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:51:40 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/06 12:49:43 by alogarci         ###   ########.fr       */
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

void	ft_matrix(char **a, char *t, char *b, char *l, char *r)
{
	int i;
	char tab[4][4];

	while (t[i] != '\0')
	{
		if (t[i] = 4)
		{
			tab[0][i] = 1;
		}
		else if (t[i] = 1)
		{
			tab[0][i] = 4;
		}
	}
	while (b[i] != '\0')
	{
		if (b[i] = 4)
		{
			tab[0][i] = 1;
		}
		else if (b[i] = 1)
		{
			tab[0][i] = 4;
		}
	}
	while (l[i] != '\0')
	{
		if (l[i] = 4)
		{
			tab[0][i] = 1;
		}
		else if (l[i] = 1)
		{
			tab[0][i] = 4;
		}
	}
	while (r[i] != '\0')
	{
		if (r[i] = 4)
		{
			tab[0][i] = 1;
		}
		else if (r[i] = 1)
		{
			tab[0][i] = 4;
		}
	}

	void	ft_fours(char *row, char *col)
	{
		int i;
		int n;

		i = 0;
		n = 0;
		while (col[i] != '\0')
		{	
			if (col[i] == 4)
			{
				a[i][0] = 1;
				a[i][1] = 2;
				a[i][2] = 3;
				a[i][3] = 4;
			}
		}
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
	char m[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	char top[4];
	char bot[4];
	char right[4];
	char left[4];
	char a[4][4];

	ft_asign(m, top, 0, 8);
	ft_asign(m, bot, 8, 16);
	ft_asign(m, left, 16, 24);
	ft_asign(m, right, 24, 32);
	ft_matrix(a, top, bot, left, right);
	ft_fours(right, top);
	ft_fours(left, bot);
	ft_tab();
	return (0);
}
