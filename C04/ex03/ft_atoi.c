/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 16:37:09 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/10 17:12:52 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int is_neg;
	int res; //resultado

	i = 0;
	is_neg = 0;
	while (str[i] != '\0')
	{
		while (str[i] == '\f' || str[i] == '\n' || str[i] == '\r' ||
		str[i] == '\t' || str[i] == '\v')
		{
			i++;
		}
		while (str[i] == '-')
		{
			is_neg++;
			i++;
		}

		if (is_neg % 2 != 0)
		{
			res *= -1;
		}
	}
}
