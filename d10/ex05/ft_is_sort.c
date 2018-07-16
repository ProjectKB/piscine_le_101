/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is_sort.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 11:15:39 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/16 22:56:00 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int		ft_check_table(int i, int j)
{
		if (i < j)
			return (-1);
		else if (i == j)
			return (0);
		else
			return (1);
}

int		ft_table_dec(int *tab, int (*f)(int, int), int i, int s)
{
	if (f(tab[i], tab[i + 1]) > 0)
	{
		while (i < s - 8)
		{
			if (f(tab[i], tab[i + 1]) < 0)
				return (0);
			i++;
		}
		return (1);
	}
	return (1);
}


int		ft_table_cro(int *tab, int (*f)(int, int), int i, int s)
{
	if (f(tab[i], tab[i + 1]) < 0)
	{
		while (i < s - 8)
		{
			if (f(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
		return (1);
	}
	return (1);
}

int		ft_is_sort(int *tab, int (*f)(int, int))
{
	int	i;
	int s;

	i = 0;
	s = 0;
	while (tab[s])
		s++;
	while (tab[i] == tab[i + 1])
	{
		if (!(tab[i + 2]) && (tab[i] == tab[i + 1]))
			return (1);
		i++;
	}
	if (!(ft_table_dec(tab, f, i, s)))
		return (0);
	else if (!(ft_table_cro(tab, f, i, s)))
		return (0);
	else 
		return (1);
	/*if (f(tab[i], tab[i + 1]) > 0)
	{
		while (i < 5)
		{
			if (f(tab[i], tab[i + 1]) < 0)
				return (0);
			i++;
		}
		return (1);
	}
	else if (f(tab[i], tab[i + 1]) < 0)
	{
		while (i < 5)
		{
			if (f(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
		return (1);
	}*/
	return (0);
}

int main()
{
	int s = 0;
	int tab[5] = {-4, 3, 5, 3, 9};
	printf("%d", ft_check_table(tab[0], tab[1]));
	printf("%d", ft_is_sort(tab, &ft_check_table));
	return (0);
}
