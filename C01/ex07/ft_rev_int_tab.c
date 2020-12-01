/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 11:35:47 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/01 13:26:35 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int s;
	int t;

	i = 0;
	s = size - 1;


	while (i < (size / 2))
	{
		t = tab[i];
		tab[i] = tab[s];
		tab[s] = t;
		i++;
		s--;
		write(1, &tab, 1);
	}
}
