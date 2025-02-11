/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xihu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 11:29:19 by xihu              #+#    #+#             */
/*   Updated: 2025/01/18 14:09:34 by xihu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putchar.c"

void	first_row(int x, int y)
{
	int     a;

        a = x;
        if (x == 1)
	{
		ft_putchar('A');
	}
	else
	{
	 	ft_putchar('A');
                x--;
                y--;
                while (x > 1)
                {
                        ft_putchar('B');
                        x--;
                }
                ft_putchar('C');
	}
		write(1, "\n", 1);
}

void	middle_rows(int x, int y)
{
	int     a;

        a = x;
	x = a;
        	
	if (y != 1)
        {
    		while (y > 1)
                {
                        ft_putchar('B');
                        while (x > 2)
                        {
                                ft_putchar(' ');
                                x--;
                        }
                        ft_putchar('B');
                        write(1, "\n", 1);
                        y--;
                        x = a;
                }
                ft_putchar('C');
	}
}	

void	rush(int x, int y)
{	
	int	a;

	a = x;
	if (x > 0 && y > 0)
	{	
		first_row(x, y);
                middle_rows(x, y);
		if (y != 1)
		{
			while (x > 2)
                	{
                	ft_putchar('B');
                        x--;
                	}
                ft_putchar('A');
                write(1, "\n", 1);
		}
	}
}

int	 main(void)
{
	rush(5, 6);
	return(0);
}
