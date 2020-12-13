/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 10:28:34 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/13 15:12:10 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_errors(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("Error, too few arguments\n");
	}
}
