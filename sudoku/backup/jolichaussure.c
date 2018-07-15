/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   sudoku.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/14 09:09:18 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 17:09:55 by loiberti    ###    #+. /#+    ###.fr     */
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

int	**ft_stock_line(int argc, char **argv, int **tab)
{
	int i;
	int j;
	int x;

	i = 0;
	j = 0;
	x = 1;
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

void	ft_display_tab(int **tab)
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

int		ft_missing_line(int **tab, int x, int v)
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



int        ft_solved_sudoku(int **tab, int position)
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

int		ft_verif(int argc, char **argv)
{
	int i;
	int j;
	int count;

	i = 1;
	j = 0;
	count = 0;
	if (argc != 10)
		return (0);
	while(argv[i])
	{
		while(argv[i][j])
		{
			if ((argv[i][j] < '1' || argv[i][j] > '9') && argv[i][j] != '.')
				return (0);
			if (argv[i][j] >= '1' && argv[i][j] <= '9')
				count++;
			j++;
		}
		j = 0;
		i++;
	}
	if (count < 17)
		return (0);
	return (1);
}

int        ft_verif2(int argc, char **argv)
{
	int i;

	i = 1;
	while (argv[i])
	{
		if (ft_strlen(argv[i]) != 9)
			return (0);
		i++;
	}
	return (1);
}

/*int        ft_verif_missing_block(int **tab, int a, int b)
{
	int i;
	int j;
	int k;
	int v;
	int line[9][9];

	i = a;
	j = b;
	v = 0;
	while (i < a + 3)
	{
		write(1, "loop1", 5);
		while (j < b + 3)
		{
		write(1, "loop2", 5);
			v = tab[i][j];
			k = 0;
			while (k < j)
			{
		write(1, "loop3", 5);
				if ((line[i][k] == v) && (v != 0))
					return(0);
				k++;
			}
			line[i][j] = tab[i][j];
			j++;
		}
		j = 0;
		i++;
	}
	i = a;
	j = b;
	while (j < b + 3)
	{
		write(1, "loop1.1", 5);
		while (i < a + 3)
		{
		write(1, "loop1.2", 5);
			v = tab[i][j];
			k = 0;
			while (k < i)
			{
		write(1, "loop1.3", 5);
				if ((line[k][j] == v) && (v != 0))
					return(0);
				k++;
			}
			line[i][j] = tab[i][j];
			i++;
		}
		i = 0;
		j++;
	}
	return (1);
}*/

int        ft_verif_missing_line(int **tab)
{
	int i;
	int j;
	int k;
	int v;
	int line[9][9];

	i = 0;
	j = 0;
	v = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			v = tab[i][j];
			k = 0;
			while (k < j)
			{
				if ((line[i][k] == v) && (v != 0))
					return(0);
				k++;
			}
			line[i][j] = tab[i][j];
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int        ft_verif_missing_column(int **tab)
{
	int i;
	int j;
	int k;
	int v;
	int line[9][9];

	i = 0;
	j = 0;
	v = 0;
	while (j < 9)
	{
		while (i < 9)
		{
			v = tab[i][j];
			k = 0;
			while (k < i)
			{
				if ((line[k][j] == v) && (v != 0))
					return(0);
				k++;
			}
			line[i][j] = tab[i][j];
			i++;
		}
		i = 0;
		j++;
	}
	return (1);
}

int		ft_verif_missing_block(int **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			if (tab[i][j] == 0)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}



int		main(int argc, char **argv)
{
	int i;
	int j;
	int **tab;

	/* if (argc != 10 || ft_verif(argc, argv))
	   return (0); */

	if (!(ft_verif(argc, argv)))
	{
		printf("Error\n");
		return 0;
	}
	if (!(ft_verif2(argc, argv)))
	{
		printf("Error2\n");
		return 0;
	}
	tab = ft_stock_line(argc, argv, tab);
	if (!(ft_verif_missing_line(tab)))
	{
		printf("Error3\n");
		return 0;
	}
	if (!(ft_verif_missing_column(tab)))
	{
		printf("Error4\n");
		return 0;
	}
	ft_display_tab(tab);
	write(1, "\n", 1);
	ft_solved_sudoku(tab, 0);
	if (!(ft_verif_missing_block(tab)))
	{
		printf("Error6\n");
		return (0);
	}
	ft_display_tab(tab);
	return (0);
}
