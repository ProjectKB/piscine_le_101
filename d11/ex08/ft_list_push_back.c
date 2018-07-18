/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_push_back.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 11:29:19 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 18:38:18 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*maillon;

	maillon = *begin_list;
	if (maillon)
	{
		while (maillon->next)
			maillon = maillon->next;
		maillon->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
