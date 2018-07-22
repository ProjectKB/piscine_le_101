/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   colle-00.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 13:55:28 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/21 15:53:13 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

int            ft_atoi(char *str)
{
	int        index;
	long    nb;
	int        neg;

	index = 0;
	neg = 0;
	nb = 0;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == 32)
		index++;
	if (str[index] == 45 || str[index] == 43)
	{
		if (str[index] == 45)
			neg = 1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		nb = (nb * 10) + (str[index] - 48);
		index++;
	}
	if (neg == 1)
		nb = -nb;
	return (nb);
}

void    ft_print(char a, char b, char c, int x)
{
	int i_x;

	i_x = 0;
	while (i_x++ < x)
	{
		if (i_x == 1)
			ft_putchar(a);
		else if (i_x != x)
			ft_putchar(b);
		else
			ft_putchar(c);
	}
	ft_putchar('\n');
}

void    rush(int x, int y)
{
	int i_y;

	i_y = 0;
	while (i_y++ < y)
	{
		if (i_y == 1)
			ft_print('A', 'B', 'C', x);
		else if (i_y != y)
			ft_print('B', ' ', 'B', x);
		else
			ft_print('C', 'B', 'A', x);
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
