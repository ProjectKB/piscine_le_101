/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_advanced_sort_wordtab.c                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 18:00:46 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/16 18:04:20 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	char	*swap;
	int		s;

	i = 0;
	while (tab[i + 1])
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
		else
			i++;
	}
}

#include <stdio.h>

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	ft_sort_wordtab(argv, &ft_strcmp);
	while (argv[i])
	{
		printf("%s", argv[i]);
		i++;
	}
	return (0);
}
