/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 16:08:23 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/09 15:29:01 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int n;
	int s;

	n = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[n] != '\0')
	{
		s = 0;
		while (str[n + s] != '\0' && str[n + s] == to_find[s])
		{
			if (to_find[s + 1] == '\0')
				return (&str[n]);
			++s;
		}
		++n;
	}
	return (0);
}
