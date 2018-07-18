/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_reverse_fun.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 15:19:29 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 16:04:09 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*maillon_c;
	t_list	*maillon_n;
	t_list	*maillon_p;

	maillon_p = NULL;
	maillon_c = begin_list;
	while (maillon_c)
	{
		maillon_n = maillon_c->next;
		maillon_c->next = maillon_p;
		maillon_p = maillon_c;
		maillon_c = maillon_n;
	}
	begin_list = maillon_p;
}
