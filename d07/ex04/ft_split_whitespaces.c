/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split_whitespaces.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 16:56:10 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/05 18:21:47 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_count_word(char *str)
{
	int i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if ((str[i] != ' ' || str[i] != '\n' || str[i] != '\n') &&
		(str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\n' ||
		str[i + 1] == '\0'))
			n++;
		i++;
	}
	return (n);
}


int ft_length_word(char *str, int p)
{
	int	c;

	c = 0;
	while ((!(str[p] == ' ' || str[p] == '\n' || str[p] == '\n')) && str[p])
	{
		p++;
		c++;
	}
	return (c);
}

void ft_fill_tab(char *str, char **tab)
{
	int	i;
	int	j;
	int	p;

	i = 0;
	p = 0;
	while (i < ft_count_word(str))
	{
		while (str[p] == ' ' || str[p] == '\n' || str[p] == '\t')
			p++;
		tab[i] = (char*)malloc(sizeof(*tab) * (ft_length_word(str, p) + 1));
		j = 0;
		while (j < ft_length_word(str, p))
		{
			tab[i][j] = str[j + p];
			j++;
		}
		j = 0;
		p += ft_length_word(str, p);
		i++;
	}
	tab[ft_count_word(str)] = 0;
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_tables(char **tab)
{
	int	i;
	int	j;

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

char **ft_split_whitespaces(char *str)
{
	char **tab;

	tab = (char**)malloc(sizeof(**tab) * (ft_count_word(str) + 1));
	ft_fill_tab(str, tab);
	return (tab);
}

int main()
{
	char x[] = "bonjour coucou bonjour";
	ft_print_tables(ft_split_whitespaces(x));
	return (0);
}
