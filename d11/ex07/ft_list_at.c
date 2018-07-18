/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_at.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 17:26:28 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 15:38:44 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*maillon;
	unsigned int	count;

	maillon = begin_list;
	count = 0;
	while (count < nbr - 1)
	{
		if (!(maillon->next))
			return (0);
		maillon = maillon->next;
		count++;
	}
	return (maillon);
}
