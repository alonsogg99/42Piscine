/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 16:30:14 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/13 10:49:25 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_read_dict(void);
void    ft_errors(int argc, char **argv);
void    ft_putchar(char c);
void    ft_putstr(char *str);

int main(int argc, char **argv)
{
    ft_errors(argc, argv);
    char *dict;
    dict = ft_read_dict();
    //printf("%s\n", dict);
}