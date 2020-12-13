/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 18:12:36 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/13 16:56:10 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <fcntl.h>
#include <unistd.h>

char	*ft_read_dict(void)
{
	int			fd;
	static char buffer[1024] = "";
	int			leido;

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error al abrir el archivo\n", 26);
	}
	leido = read(fd, buffer, 1024);
	close(fd);
	return (buffer);
}
