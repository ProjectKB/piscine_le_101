/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   sudoku.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/14 09:09:18 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/14 15:22:20 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int		ft_convert_char(char c)
{
	int r;
	int n;

	r = 0;
	if (c >= '1' && c <= '9')
	{
		r = c - 48;
		return (r);
	}
	else
		return (0);
}

int		**ft_stock_line(int argc, char **argv)
{
	int	**tab;
	int	x;
	int	y;
	int i;
	int j;

	x = 0;
	y = 0;
	i = 0;
	j = 0;
	tab = (int**)malloc(sizeof(**tab) * 9);
	while (argv[i])
	{
		tab[x] = malloc(sizeof(*tab) * 9);
		while (argv[i][j])
		{
			tab[x][y] = ft_convert_char(argv[i][j]);
			y++;
			j++;
		}
		y = 0;
		j = 0;
		i++;
		x++;
	}
	return (tab);
}

void	ft_display_tab(int **tab)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i != 10)
	{
		while (j != 9)
		{
			ft_putnbr(tab[i][j]);
			if (j != 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}

int		ft_verif(int argc, char **argv)
{
	int i;

	i = 1;
	while (argv[i])
	{
		if (ft_strlen(argv[i]) != 9)
			return (1);
		i++;
	}
	return (0);
}

int		ft_missing_line(int **tab, int x, int v)
{
	int y;

	y = 0;
	while (y != 9)
	{
		if (tab[x][y] == v)
			return (0);
		y++;
	}
	return (1);
}

int		ft_missing_column(int **tab, int y, int v)
{
	int x;

	x = 0;
	while (x != 9)
	{
		if (tab[x][y] == v)
			return (0);
		x++;
	}
	return (1);
}

int		ft_missing_block(int **tab, int x, int y, int v)
{
	int i;
	int j;

	i = x - (x % 3);
	j = y - (y % 3);
	while (x < i + 3)
	{
		x = i;
		while (y < j + 3)
		{
			y = j;
			if (tab[x][y] == v)
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}




void	ft_set_up_item(int **tab, int x, int y)
{
	
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int **tab;

	if (argc != 10 || ft_verif(argc, argv))
		return (0);
	tab = ft_stock_line(argc, argv);

	ft_display_tab(tab);
	return (0);
}
