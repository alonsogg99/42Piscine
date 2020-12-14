/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 16:17:51 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/14 17:12:08 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int n;

	n = 0;
	while ((s1[n] != '\0' && s2[n] != '\0') && (s1[n] == s2[n]))
	{
		n++;
	}
	if (s1[n] == s2[n])
	{
		return (0);
	}
	else if (s1[n] != s2[n])
	{
		return (s1[n] - s2[n]);
	}
	return (0);
}


int		main(int argc, char **argv)
{
	int n;
	char *tmp;
	int	f;

	f = 1;

	while (f)
	{
		f = 0;
		n = 0;
		while (++n < argc - 1)
		{
			if (ft_strcmp(argv[n], argv[n + 1]) > 0)
			{
				tmp = argv[n];
				argv[n] = argv[n + 1];
				argv[n + 1] = tmp;
			}
		}
	}
	n = 0;
	while (++n < argc)
	{
		ft_putstr(argv[n]);
		ft_putchar('\n');
	}
	return (0);
}
