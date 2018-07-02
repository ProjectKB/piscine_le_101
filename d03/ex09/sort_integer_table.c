/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   sort_integer_table.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/02 21:19:51 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/02 21:33:10 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_integer_table(int *tab, int size)
{
	int i;
	int swap;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
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

int main()
{
	int tab[] = {1, 8, 0, 6, 8};
	int size = 5;
	ft_sort_integer_table(tab, size);
	int i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}
