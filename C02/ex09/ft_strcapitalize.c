/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 11:40:23 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/07 13:03:20 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int n;
	int check;

	check = 0;
	n = 0;
	while (str[n] != '\0')
	{
		if (n == 0) | (str[n - 1] >= ' ') && (str[n - 1] < '/') ||
			(str[n] >= ':' && str[n] <= '@')
			check = 0;
		else if (str[n] <= 0 && str[n])
			check = 1;
		else if (str[n] <= 'A' && str[n] >= 'Z')
			check = 1;
		else if (str[n] >= 'a' && str[n] <= 'z' && check == 0)
			str[n] -= 32;
		n++;
		check = 1;
	}
	return (str);
}
