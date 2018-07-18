/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_foreach.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 19:31:38 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 12:29:47 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *list_ptr;
	t_list *tmp;

	list_ptr = begin_list;
	while (list_ptr->next)
	{
		if ((*cmp)(list_ptr->next->data, data_ref) == 0)
		{
			tmp = list_ptr->next;
			list_ptr->next = list_ptr->next->next;
			free(list_ptr);
		}
		list_ptr = list_ptr->next;
	}
}
