/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 15:08:43 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/09 15:28:54 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int n;
	int s;

	n = 0;
	while (dest[n] != '\0')
		n++;
	s = 0;
	while (src[s] != '\0')
	{
		dest[n + s] = src[s];
		s++;
	}
	dest[n + s] = '\0';
	return (dest);
}
