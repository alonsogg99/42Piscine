/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   code.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 10:07:21 by alogarci          #+#    #+#             */
/*   Updated: 2020/11/28 10:58:24 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n);

int	main(void)
{
	int n;

	

	ft_is_negative(1);

	return(0);
}

void ft_is_negative(int n)
{
	char o;
	char p;

	o = 'P';
	p = 'N';

	if (n >= 0)
	{
		write(1, &o, 1);
	}
	else
	{
		write(1, &p, 1);
	}
	
}