/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   list.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 17:39:51 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 16:34:37 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "my.h"

t_list	*ft_create_elem(void)
{
	t_list	*maillon;

	if (!(maillon = (t_list*)malloc(sizeof(*maillon))))
		return (NULL);
	maillon->next = NULL;
	return (maillon);
}

void	ft_list_clear(t_list *begin_list)
{
	t_list	*maillon;
	t_list	*tmp;

	maillon = begin_list;
	if (maillon)
	{
		while (maillon)
		{
			tmp = maillon->next;
			free(maillon);
			maillon = tmp;
		}
	}
	begin_list = NULL;
}
