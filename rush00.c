/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakazzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 09:47:54 by lakazzie          #+#    #+#             */
/*   Updated: 2020/07/15 11:13:15 by lakazzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int len, int height)
{
	int y;
	int x;

	if(len != 0 && height != 0)
	{
		len--;
		height--;
		y = -1;
		while(y++ < height)
		{
			x = -1;
			while(x++ < len)
			if((x == 0 || x == len) && (y == 0 || y == height))
					{
						ft_putchar('o');
					}
			else if(x == 0 || x == len)
			{
				ft_putchar('|');
			}
			else if(y == 0 || y == height)
			{
				ft_putchar('-');
			}
			else
			{
				ft_putchar(' ');
			}
			ft_putchar('\n');
		}
	}
}

int main(void)
{
    rush(5,5);
    return(0);
}
	
