/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_last.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 14:41:42 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 14:48:46 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_push_front(t_list **begin_list, void *data);

t_list	*ft_list_last(t_list **begin_list)
{
	t_list	*maillon;

	maillon = *begin_list;
	while (maillon->next)
		maillon = maillon->next;
	return (maillon);
}

int main()
{
	void *data2;
	void *data;
	t_list *list[5];
	t_list *maillon;

	data2 = (void*)9;
	data = (void*)5;
	ft_list_push_back(list, data2);
	ft_list_push_front(list, data2);
	ft_list_push_back(list, data);
	printf("%d", (int)ft_list_last(list)->data);
	return (0);
}
