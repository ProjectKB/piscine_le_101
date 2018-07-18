/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_sort.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 15:03:17 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 15:18:44 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list **begin_list)
{
	t_list		*maillon;
	int			count;

	maillon = *begin_list;
	count = 0;
	while (maillon)
	{
		maillon = maillon->next;
		count++;
	}
	return (count);
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*maillon;
	t_list	*tmp;
	int		count;
	int		size;

	count = 0;
	size = ft_list_size(begin_list);
	maillon = *begin_list;
	while (count < size - 1)
	{
		if (cmp(maillon->data, maillon->next->data) > 0)
		{
			tmp = maillon;
			maillon = maillon->next;
			maillon->next = tmp;
			count = 0;
		}
		else
			count++;
	}
}
