/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   algo.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/15 18:03:32 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 18:25:57 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "sudo.h"

int		**ft_stock_line(int argc, char **argv, int **tab)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	j = 0;
	x = 1;
	(void)argc;
	tab = (int**)malloc(sizeof(*tab) * 9);
	while (i < 9)
	{
		tab[i] = (int*)malloc(sizeof(tab) * 9);
		while (j < 9)
		{
			tab[i][j] = ft_convert_char(argv[x][j]);
			j++;
		}
		j = 0;
		i++;
		x++;
	}
	return (tab);
}

int		ft_missing_line(int **tab, int x, int v)
{
	int	y;

	y = 0;
	while (y < 9)
	{
		if (tab[x][y] == v)
			return (0);
		y++;
	}
	return (1);
}

int		ft_missing_column(int **tab, int y, int v)
{
	int	x;

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

int		ft_solved_sudoku(int **tab, int position)
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
