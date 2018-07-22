/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_verif_2.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/22 11:33:47 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 16:04:15 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/ft_verif_rush.h"

char  *ft_putofstr(char **str, int x, int y)
{
	int i;
	int j;
	int k;
	char *tab;

	i = 0;
	k = 0;
	tab = (char*)malloc(sizeof(*tab) * ((x + 1) * y + 1 ));
//		return (NULL);
	while (str[i])
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			tab[k] = str[i][j];
			j++;
			k++;
		}
		i++;
	}
	tab[k] = '\0';
	return (tab);
}

char    *ft_tab_x(char a, char b, char c, int x)
{
	int i_x;
	char *tab_x;

	tab_x = (char*)malloc(sizeof(char) * (x + 2));
//		return (NULL);
	i_x = 0;
	while (i_x++ < x)
	{
		if (i_x == 1)
			tab_x[i_x - 1] = a;
		else if (i_x != x)
			tab_x[i_x - 1] = b;
		else
			tab_x[i_x - 1] = c;
	}
	tab_x[i_x - 1] = '\n';
	tab_x[i_x] = '\0';
	return (tab_x);
}




