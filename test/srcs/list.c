/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   list.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 17:39:51 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/21 21:18:38 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/ft_list.h"

t_list    *ft_create_elem(void)
{
	t_list    *maillon;

	maillon = (t_list*)malloc(sizeof(*maillon));
	maillon->next = NULL;
	return (maillon);
}

/*void    ft_list_push_back(t_list *begin_list)
{
	t_list    *maillon;

	maillon = begin_list;
	if (maillon)
	{
		while (maillon->next)
			maillon = maillon->next;
		maillon->next = ft_create_elem();
	}
	else
		begin_list = ft_create_elem();
}*/
