/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 15:10:28 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/13 17:53:00 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

typedef struct s_list
{
    int key;
    char *value;
}               t_list;


char    *ft_read_dict(void);
void    ft_errors(int argc, char **argv);
void    ft_putchar(char c);
void    ft_putstr(char *str);
void	ft_dict_searching(char *dict, int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int	ft_atoi(char *str);

#endif
