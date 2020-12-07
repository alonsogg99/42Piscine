/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:05:44 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/07 12:01:31 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				n;
	unsigned int	c;

	c = 0;
	while (src[c] != '\0')
	{
		++c;
	}
	n = 0;
	while (src[n] != '\0' && n < size)
	{
		dest[n] = src[n];
		++n;
	}
	dest[n] = '\0';
	return (c);
}
