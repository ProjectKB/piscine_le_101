/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   sudoku.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/14 09:09:18 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/14 21:44:04 by loiberti    ###    #+. /#+    ###.fr     */
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
		return (r);
}

int		**ft_stock_line(int argc, char **argv)
{
	int	**tab;
	int i;
	int j;

	i = 0;
	j = 0;
	tab = (int**)malloc(sizeof(**tab) * 9);
	while (argv[i])
	{
		tab[i] = malloc(sizeof(*tab) * 9);
		while (argv[i][j])
		{
			tab[i][j] = ft_convert_char(argv[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
	return (tab);
}

void	ft_display_tab(int tab[9][9])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
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

int		ft_missing_line(int tab[9][9], int x, int v)
{
	int y;

	y = 0;
	while (y < 9)
	{
		if (tab[x][y] == v)
			return (0);
		y++;
	}
	return (1);
}

int		ft_missing_column(int tab[9][9], int y, int v)
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


int		ft_missing_block(int tab[9][9], int x, int y, int v)
{
	int	i;
	int	j;

	i = x - (x % 3);
	j = y - (y % 3);
	x = i;
	while (x < i + 3)
	{
		y = j;
		while (y < j + 3)
		{
			if (tab[x][y] == v)
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

int        ft_solved_sudoku(int tab[9][9], int position)
{
	int	x;
	int	y;
	int	v;

	x = position / 9;
	y = position % 9;
	v = 1;
	if (position == (9 * 9))
		return (1);
	if (tab[x][y] != 0)
		return (ft_solved_sudoku(tab, position + 1));
	while (v <= 9)
	{
		if (ft_missing_line(tab, x, v) && ft_missing_column(tab, y, v) &&
				ft_missing_block(tab, x, y, v))
		{
			tab[x][y] = v;
			if (ft_solved_sudoku(tab, position + 1))
				return (1);
		}
		v++;
	}
	tab[x][y] = 0;
	return (0);
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int **tab;
	int grille[9][9] =
	{
		{9,0,0,1,0,0,0,0,5},
		{0,0,5,0,9,0,2,0,1},
		{8,0,0,0,4,0,0,0,0},
		{0,0,0,0,8,0,0,0,0},
		{0,0,0,7,0,0,0,0,0},
		{0,0,0,0,2,6,0,0,9},
		{2,0,0,3,0,0,0,0,6},
		{0,0,0,2,0,0,9,0,0},
		{0,0,1,9,0,4,5,7,0}
	};

	/* if (argc != 10 || ft_verif(argc, argv))
	   return (0); */
	tab = ft_stock_line(argc, argv);
	ft_display_tab(grille);
	write(1, "\n", 1);
	ft_solved_sudoku(grille, 0);
	ft_display_tab(grille);
	return (0);
}
