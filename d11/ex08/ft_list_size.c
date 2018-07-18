/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_size.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 13:42:02 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 18:38:39 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list **begin_list)
{
	t_list	*maillon;
	int		count;

	maillon = *begin_list;
	count = 0;
	while (maillon)
	{
		maillon = maillon->next;
		count++;
	}
	return (count);
}
