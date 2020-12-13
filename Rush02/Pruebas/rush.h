/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 15:10:28 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/13 15:17:53 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

typedef struct s_list
{
    int nb;
    char *num;
}               t_list;


char    *ft_read_dict(void);
void    ft_errors(int argc, char **argv);
void    ft_putchar(char c);
void    ft_putstr(char *str);

#endif
