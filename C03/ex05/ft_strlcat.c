/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:16:18 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/09 12:08:43 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int n;
	unsigned int s;

	n = 0;
	s = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	while ((src[s] != '\0') && (s != size))
	{
		dest[n] = src[s];
		s++;
		n++;
	}
	return (0);
}
