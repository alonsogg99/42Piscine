/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 15:51:57 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/07 16:07:41 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int n;
	int s;

	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	s = 0;
	while (src[s] != '\0' && s <= nb)
	{
		dest[n + s] = src[s];
		s++;
	}
	dest[n + s] = '\0';
	return (dest);
}
