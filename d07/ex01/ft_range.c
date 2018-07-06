/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_range.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 14:21:20 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/06 10:07:19 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	s;
	int	*tab;

	i = 0;
	s = max - min;
	if (min >= max)
		return (NULL);
	if (!(tab = (int*)malloc(sizeof(*tab) * s)))
		return (0);
	while (i != s)
	{
		tab[i] = min++;
		i++;
	}
	return (tab);
}
