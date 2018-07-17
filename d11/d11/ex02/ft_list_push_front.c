/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_push_front.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 13:12:38 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 13:48:01 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*maillon;

	if (*begin_list)
	{
		maillon = ft_create_elem(data);
		maillon->next = *begin_list;
		*begin_list = maillon;
	}
	else
		*begin_list = ft_create_elem(data);
}

int main()
{
	void *data;
	void *data2;
	t_list *maillon;
	t_list	*list;

	data = (void*)5;
	data2 = (void*)9;
	ft_list_push_front(&maillon, data);
	printf("%d", (int)maillon->data);
	return (0);
}
