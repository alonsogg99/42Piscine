/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:49:59 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/03 11:12:37 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 'A' || str[n] > 'Z')
		{
			i++;
		}
		n++;
	}
	if (i > 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}