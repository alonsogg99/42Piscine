/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 14:43:51 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/01 15:25:59 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int n;
	int fix;
	int s;

	n = 0;
	s = size - 1;

	while (n < s)
	{
		if (tab[n] > tab[n + 1])
		{
			fix = tab[n];
			tab[n] = tab[n + 1];
			tab[n + 1] = fix;
			n = 0;
		}
		else
		{
			n++;
		}
	}
}
