/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   code.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 15:41:44 by alogarci          #+#    #+#             */
/*   Updated: 2020/11/28 16:42:36 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c);

int     main(void){

    int x;
    x = 0;
    int y;
    y =0;
    
    while(x < 5)
    {
        ft_putchar('A');
        x++;
        while(y < 5)
        {
            ft_putchar('A');
            y++;
        }
    }
   

}