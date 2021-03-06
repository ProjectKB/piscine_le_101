/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultimate_range.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 15:19:03 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/11 19:04:25 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	s;
	int	*tab;

	i = 0;
	s = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(tab = (int*)malloc(sizeof(*tab) * s)))
		return (0);
	while (i != s)
	{
		tab[i] = min++;
		i++;
	}
	*range = tab;
	return (s);
}
