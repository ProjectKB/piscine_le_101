/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_map.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 10:49:01 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/16 18:11:47 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_addition(int a)
{
	return (a + 2);
}

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int *ptr_tab;

	i = -1;
	if (!(ptr_tab = (int*)malloc(sizeof(*ptr_tab) * length)))
		return (NULL);
	while (++i < length)
		ptr_tab[i] = f(tab[i]);
	return (ptr_tab);
}

int		main(void)
{
	int	*ptr;
	int	tab[5] = {1, 2, 3, 4};
	int	i = 0;

	ptr = ft_map(tab, 4, &ft_addition);
	while (ptr[i])
	{
		printf("%d", ptr[i]);
		i++;
	}
	return (0);
}
