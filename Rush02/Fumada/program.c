/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 17:24:10 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/12 22:54:09 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "struct.h"

typedef struct dictionary dict;

dict	line(char **array_of_lines)
{
	dict    reference;
	char	*cad;
    
	while (**array_of_lines != '\0')
	{
		while (**array_of_lines != ':')
		{
			cad = ft_strcat(cad, **array_of_lines);
			**array_of_lines++;
		}
		cad = ft_strcat(cad, "\0");
		reference.key = ft_atoi(cad);
		cad = ft_strcpy(cad, "");
		**array_of_lines++;
		while (**array_of_lines != '\0')
		{
			cad = ft_strcat(cad, **array_of_lines);
			**array_of_lines++;
		}
		cad = ft_strcat(cad, "\0");
		reference.value = cad;
	}
	return (reference);
}

char	**split(char *buffer)
{
	int		i;
	int		k;
	char	**array_of_chars;
    
	i = 0;
	k = 0;
	while (buffer[i] != '\0')
	{
		while(buffer[i] != '\n')
		{
			*array_of_chars = ft_strcat(*array_of_chars, buffer[i]);
			i++;
		}
		**array_of_chars = '\0';
		*array_of_chars++;
		k++;
		i++;
	}
	*array_of_chars = *array_of_chars - k;
	return (array_of_chars);
}

int		main(int argc, char **argv)
{
	int					fd;
	int					i;
	static char			buf[1024];
	char				**array;

	fd = open("numbers.dict", O_RDONLY);
	i = 0;
	if (fd == -1)
		write(1, "Error al abrir el archivo\n", 26);
	else
	{
		read(fd, buf, 1024);
		array = split(buf);
		while (................)
	}
	return (0);
}
