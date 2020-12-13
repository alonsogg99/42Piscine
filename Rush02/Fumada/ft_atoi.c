/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 15:55:42 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/12 20:20:33 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		dec_pot(int numbers)
{
	int pot;

	pot = 1;
	while (numbers > 1)
	{
		pot = pot * 10;
		numbers--;
	}
	return (pot);
}

int		digits(char *string, int j)
{
	int num;
	int digits;

	num = 0;
	digits = 0;
	while (string[j] >= '0' && string[j] <= '9')
	{
		digits++;
		j++;
	}
	j = j - digits;
	while (string[j] >= '0' && string[j] <= '9')
	{
		num = num + (string[j] - '0') * dec_pot(digits);
		j++;
		digits--;
	}
	return (num);
}

int		sign(int s)
{
	if (s % 2 == 0)
		return (1);
	else
		return (-1);
}

int		ft_atoi(char *str)
{
	int i;
	int sign_minus;

	i = 0;
	sign_minus = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign_minus++;
			i++;
		}
	}
	if (str[i] >= '0' && str[i] <= '9')
		return ((digits(str, i)) * sign(sign_minus));
	else
		return (0);
}
