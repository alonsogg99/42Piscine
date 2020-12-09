/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:32:13 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/09 11:49:57 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	r;

	r = 0;
	while ((s1[r] != '\0' && s2[r] != '\0') && (r <= n))
	{
		while (s1[r] == s2[r] && (r != n))
		{
			r++;
		}
		if (s1[r] != s2[r])
		{
			return (s1[r] - s2[r]);
		}
		return (0);
	}
	return (0);
}
