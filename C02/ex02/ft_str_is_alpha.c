/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:15:08 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/02 16:31:39 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int n;
	int i;

	n = 0;
	if (str[n] != '\0')
	{
		while (str[n] < 'A' || str[n] > 'z')
		{
			i++;
		}
		return (1);
	}

}

int	main(void)
{
	char x[] = "Hola";

	ft_str_is_alpha(x);
}
