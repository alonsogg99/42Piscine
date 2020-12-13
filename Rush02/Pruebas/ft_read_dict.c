/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 18:12:36 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/13 10:30:17 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

char	*ft_read_dict(void)
{
	int			fd;
	static char buffer[1024] = "";
	int			leido;

	fd = open("numbers.dict", O_RDONLY);
	leido = read(fd, buffer, 1024);
	close(fd);
	return (buffer);
}
