/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_clear.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 16:29:24 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 15:39:02 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *maillon;
	t_list *tmp;

	maillon = *begin_list;
	while (maillon)
	{
		tmp = maillon->next;
		free(maillon);
		maillon = tmp;
	}
	*begin_list = NULL;
}
