/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_create_tab.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kabouama <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 14:20:25 by kabouama     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 22:37:30 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "my.h"

void	free_test(char **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[j])
	{
		free(tab[j]);
		j++;
	}
	free(tab);
}

char	**decoupe_tab(char *str, char **tab, int i, int j)
{
	int k;

	k = 0;
	while (k != ft_find_x(str))
	{
		if (str[k + j] == '\n' && k != ft_find_x(str))
			return (0);
		if (str[k + j] != '\n')
			tab[i][k] = str[k + j];
		k++;
	}
	tab[i][k] = '\0';
	return (tab);
}

char	**ft_create_tab(char *str, int cpt, int i)
{
	char	**tab;
	int		j;
	int		k;

	j = 1;
	while (str[j - 1] != '\n')
		j++;
	if (!(tab = (char**)malloc(sizeof(char*) * (ft_find_y(str) + 1))))
		return (NULL);
	while (str[j])
	{
		k = 0;
		if (!(tab[i] = (char*)malloc(sizeof(char) * (ft_find_x(str) + 1))))
			return (NULL);
		while (k != ft_find_x(str))
			k++;
		tab = decoupe_tab(str, tab, i, j);
		cpt++;
		j += k + 1;
		i++;
	}
	tab[i] = NULL;
	if (cpt < 1)
		return (0);
	return (tab);
}

void	ft_print_words_table(char **tab)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		while (tab[i][j])
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
