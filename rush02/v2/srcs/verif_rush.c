/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   verif_rush.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/22 11:28:50 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 16:03:19 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/ft_verif_2.h"

char    **rush00(int x, int y)
{
	int i_y;
	char **tab_y;

	i_y = 0;
	tab_y = (char**)malloc(sizeof(*tab_y) * (y + 1));
//		return (NULL);
	while (i_y++ < y)
	{
		if (i_y == 1)
			tab_y[i_y - 1] = ft_tab_x('o', '-', 'o', x);
		else if (i_y != y)
			tab_y[i_y - 1] = ft_tab_x('|', ' ', '|', x);
		else
			tab_y[i_y - 1] = ft_tab_x('o', '-', 'o', x);
	}
	tab_y[i_y - 1] = 0;
	return (tab_y);
}

char    **rush01(int x, int y)
{
	int i_y;
	char **tab_y;

	i_y = 0;
	tab_y = (char**)malloc(sizeof(*tab_y) * (y + 1));
//		return (NULL);
	while (i_y++ < y)
	{
		if (i_y == 1)
			tab_y[i_y - 1] = ft_tab_x('/', '*', '\\', x);
		else if (i_y != y)
			tab_y[i_y - 1] = ft_tab_x('*', ' ', '*', x);
		else
			tab_y[i_y - 1] = ft_tab_x('\\', '*', '/', x);
	}
	tab_y[i_y - 1] = 0;
	return (tab_y);
}

char    **rush02(int x, int y)
{
	int i_y;
	char **tab_y;

	i_y = 0;
	tab_y = (char**)malloc(sizeof(*tab_y) * (y + 1));
//		return (NULL);
	while (i_y++ < y)
	{
		if (i_y == 1)
			tab_y[i_y - 1] = ft_tab_x('A', 'B', 'A', x);
		else if (i_y != y)
			tab_y[i_y - 1] = ft_tab_x('B', ' ', 'B', x);
		else
			tab_y[i_y - 1] = ft_tab_x('C', 'B', 'C', x);
	}
	tab_y[i_y - 1] = 0;
	return (tab_y);
}

char    **rush03(int x, int y)
{
	int i_y;
	char **tab_y;

	i_y = 0;
	tab_y = (char**)malloc(sizeof(*tab_y) * (y + 1));
//		return (NULL);
	while (i_y++ < y)
	{
		if (i_y == 1)
			tab_y[i_y - 1] = ft_tab_x('A', 'B', 'C', x);
		else if (i_y != y)
			tab_y[i_y - 1] = ft_tab_x('B', ' ', 'B', x);
		else
			tab_y[i_y - 1] = ft_tab_x('A', 'B', 'C', x);
	}
	tab_y[i_y - 1] = 0;
	return (tab_y);
}

char    **rush04(int x, int y)
{
	int i_y;
	char **tab_y;

	i_y = 0;
	tab_y = (char**)malloc(sizeof(*tab_y) * (y + 1));
//		return (NULL);
	while (i_y++ < y)
	{
		if (i_y == 1)
			tab_y[i_y - 1] = ft_tab_x('A', 'B', 'C', x);
		else if (i_y != y)
			tab_y[i_y - 1] = ft_tab_x('B', ' ', 'B', x);
		else
			tab_y[i_y - 1] = ft_tab_x('C', 'B', 'A', x);
	}
	tab_y[i_y - 1] = 0;
	return (tab_y);
}
