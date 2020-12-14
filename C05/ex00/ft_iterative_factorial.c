/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 11:53:49 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/14 16:43:53 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int n;
	int result;

	n = 1;
	result = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (n <= nb)
	{
		result *= n;
		n++;
	}
	return (result);
}
