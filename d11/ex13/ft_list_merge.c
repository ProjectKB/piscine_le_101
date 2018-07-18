/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_merge.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 12:03:54 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 12:14:55 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *maillon;

	maillon = *begin_list1;
	if (!(maillon))
		maillon = begin_list2;
	else
	{
		while (maillon)
			maillon = maillon->next;
		maillon->next = begin_list2;
	}
}
