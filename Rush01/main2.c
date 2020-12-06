/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:03:57 by egomez-a          #+#    #+#             */
/*   Updated: 2020/12/05 20:03:28 by egomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{

// Tabla equivalencias.
//  Cero es el valor inicial, puede ser uno, dos, tres o cuatro
//  Cinco es uno, dos o tres
//  Seis es uno o dos
//  Siete es uno o tres
//  Ocho es dos o tres

//	int a[4][4];
	int col;
	int row;
	int j;
	int k; 
	int l;
	int	a[4][4] = 	{	{0, 0, 0, 0}, 
						{0, 0, 0, 0}, 
						{0, 0, 0, 0}, 
						{0, 0, 0, 0}}; 
					
//	Condiciones de partida
	int top[4] = {4, 3, 2, 1};
	int bot[4] = {1, 2, 2, 2};
	int lef[4] = {4, 3, 2, 1};
	int rig[4] = {1, 2, 2, 2};	

//  Prueba --- si hay un dos, tiene que haber uno o dos o tres que represento con un cinco
    row = 0;
    while (row < 4)
    {
        if (lef[row] == 2)
            a[0][row] = 5;
        if (rig[row] == 2)
            a[3][row] = 5;
        row++;
    }

    col = 0;
    while (col < 4)
    {
        if (top[col] == 2)
            a[col][0] = 5;
        if (bot[col] == 2)
            a[col][3] = 5;
        col++;
    }

//	Prueba -- si hay un tres, tiene que haber uno o dos que represento con un seis
    row = 0;
    while (row < 4)
    {
        if (lef[row] == 3)
            a[0][row] = 6;
        if (rig[row] == 3)
            a[3][row] = 6;
        row++;
    }

    col = 0;
    while (col < 4)
    {
        if (top[col] == 3)
            a[col][0] = 6;
        if (bot[col] == 3)
            a[col][3] = 6;
        col++;
	}


//	Prueba: Si hay un uno, tiene que haber un cuatro
	row = 0;
	while (row < 4)
	{
		if (lef[row] == 1)
			a[0][row] = 4;
	   	if (rig[row] == 1)
			a[3][row] = 4;	
		row++;
	}

    col = 0;
    while (col < 4)
    {
        if (top[col] == 1)
            a[col][0] = 4;
        if (bot[col] == 1)
            a[col][3] = 4;
        col++;
    }

//	Prueba - si hay un cuatro, tiene que haber unodostres seguidos
    row = 0;
    while (row < 4)
    {
        if (lef[row] == 4)
		{
            a[0][row] = 1;
			a[1][row] = 2;
			a[2][row] = 3; 
			a[3][row] = 4;
		}
		if (rig[row] == 4)
		{   a[0][row] = 4;
            a[1][row] = 3;
            a[2][row] = 2;
            a[3][row] = 1;
		}
        row++;
    }
    
	col = 0;
    while (col < 4)
    {
        if (top[col] == 4)
		{
			a[col][0] = 1;
            a[col][1] = 2;
            a[col][2] = 3;
            a[col][3] = 4;
		}
        if (bot[col] == 4)
		{
			a[col][0] = 4;
            a[col][1] = 3;
            a[col][2] = 2;
            a[col][3] = 1;
		}
            col++;
    }

//	funcion para transformar los seis en uno o dos 

	row = 0;
	while (row < 4)
	{
		col = 0; 
		k = 0; 
		j = 0; 
		l = 0; 
		while (col < 4)
		{
			if (a[col][row] == 1)
			{
				k = 1; 
			}
			if (a[col][row] == 6)
				j = 1;
				l = col; 
			col++;
			if ((j == 1) && (k == 1))
				a[l][row] = 2;
				l = 0; 
		}
		row++; 
	}

    col = 0;
    while (col < 4)
    {
        row = 0;
        k = 0;
        j = 0;
        l = 0;
        while (row < 4)
        {
            if (a[col][row] == 1)
            {
                k = 1;
            }
            if (a[col][row] == 6)
                j = 1;
                l = row;
            row++;
            if ((j == 1) && (k == 1))
                a[col][l] = 2;
                l = 0;
        }
        col++;
    }	


	
//  funcion para transformar los cinco en ocho, es decir dos o tres

    row = 0;
    while (row < 4)
    {
        col = 0;
        k = 0;
        j = 0;
		l = 0; 
        while (col < 4)
        {
            if (a[col][row] == 1)
            {
                k = 1;
            }
            if (a[col][row] == 5)
                j = 1;
                l = col;
            col++;
           if ((j == 1) && (k == 1))
				a[l][row] = 8;
				l = 0; 
        }
        row++;
    }

    col = 0;
    while (col < 4)
    {
        row = 0;
        k = 0;
        j = 0;
        l = 0;
        while (row < 4)
        {
            if (a[col][row] == 1)
            {
                k = 1;
            }
            if (a[col][row] == 5)
                j = 1;
                l = row;
            row++;
           	if ((j == 1) && (k == 1))
                a[col][l] = 8;
                l = 0;
        }
        col++;
    }



//  funcion para transformar los cinco en siete, es decir uno o tres

    row = 0;
    while (row < 4)
    {
        col = 0;
        k = 0;
        j = 0;
        l = 0;
        while (col < 4)
        {
            if (a[col][row] == 2)
            {
                k = 1;
            }
            if (a[col][row] == 5)
                j = 1;
                l = col;
            col++;
           if ((j == 1) && (k == 1))
                a[l][row] = 7;
                l = 0;
        }
        row++;
    }

	col = 0;
    while (col < 4)
    {
        row = 0;
        k = 0;
        j = 0;
        l = 0;
        while (row < 4)
        {
            if (a[col][row] == 2)
            {
                k = 1;
            }
            if (a[col][row] == 5)
                j = 1;
                l = row;
            row++;
           	if ((j == 1) && (k == 1))
                a[row][l] = 7;
                l = 0;
        }
        col++;
    }

//  funcion para transformar los cinco en seis, es decir uno o dos

    row = 0;
    while (row < 4)
    {
        col = 0;
        k = 0;
        j = 0;
        l = 0;
        while (col < 4)
        {
            if (a[col][row] == 3)
            {
                k = 1;
            }
            if (a[col][row] == 5)
                j = 1;
                l = col;
            col++;
           if ((j == 1) && (k == 1))
                a[l][row] = 6;
                l = 0;
        }
        row++;
    }

    col = 0;
    while (col < 4)
    {
        row = 0;
        k = 0;
        j = 0;
        l = 0;
        while (row < 4)
        {
            if (a[col][row] == 3)
            {
                k = 1;
            }
            if (a[col][row] == 5)
                j = 1;
                l = row;
            row++;
           	if ((j == 1) && (k == 1))
                a[col][l] = 6;
                l = 0;
        }
        col++;
    }

//	ft_putchar('\n');	

	row=0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			ft_putchar(a[col][row] +'0');
			ft_putchar(' '); 
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

