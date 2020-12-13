/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 16:30:14 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/13 17:55:44 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    int nb;
    ft_errors(argc, argv);
    char *dict;
    dict = ft_read_dict();
    nb = ft_atoi(argv[1]);
    ft_dict_searching(dict, nb);
}