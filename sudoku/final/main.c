/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/15 18:04:02 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 18:33:41 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "sudo.h"

void	ft_display_tab(int **tab)
{
	int	i;
	int	j;

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

int		main(int argc, char **argv)
{
	int	**tab;

	tab = NULL;
	if (!(ft_verif(argc, argv)) || (!ft_verif_size_arg(argc, argv)))
	{
		ft_putstr("Error");
		ft_putchar('\n');
		return (0);
	}
	tab = ft_stock_line(argc, argv, tab);
	ft_solved_sudoku(tab, 0);
	if (!(ft_verif_line_column_block(tab)))
	{
		ft_putstr("Error");
		ft_putchar('\n');
		return (0);
	}
	ft_display_tab(tab);
	return (0);
}
