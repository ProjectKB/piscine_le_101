/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split_whitespaces.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 16:56:10 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 19:08:20 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_word(char *str)
{
	int		i;
	int		n;

	i = -1;
	n = 0;
	while (str[++i])
	{
		if ((i == 0 || str[i - 1] == '\t' || str[i - 1] == '\n' ||
		str[i - 1] == ' ') && (!(str[i] == '\n' || str[i] == '\t' ||
		str[i] == ' ')))
			n++;
	}
	return (n);
}

int		ft_length_word(char *str, int p)
{
	int		c;

	c = 0;
	while ((!(str[p] == ' ' || str[p] == '\t' || str[p] == '\n')) && str[p])
	{
		p++;
		c++;
	}
	return (c);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		p;
	char	**tab;

	i = -1;
	p = 0;
	if (!(tab = (char**)malloc(sizeof(**tab) * (ft_count_word(str) + 1))))
		return (NULL);
	while (++i < ft_count_word(str))
	{
		while (str[p] == ' ' || str[p] == '\n' || str[p] == '\t')
			p++;
		if (!(tab[i] = (char*)malloc(sizeof(*tab) *
		(ft_length_word(str, p) + 1))))
			return (NULL);
		j = -1;
		while (++j < ft_length_word(str, p))
			tab[i][j] = str[j + p];
		tab[i][j] = '\0';
		p += ft_length_word(str, p);
	}
	tab[ft_count_word(str)] = 0;
	return (tab);
}
