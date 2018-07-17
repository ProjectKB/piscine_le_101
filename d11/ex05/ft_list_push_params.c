/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_push_params.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 14:50:43 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 16:20:27 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
t_list	*ft_list_last(t_list **begin_list);

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*maillon;
	t_list	*tmp;

	maillon = ft_create_elem(av[ac - 1]);
	tmp = maillon;
	ac--;
	while (ac > 0)
	{
		maillon->next = ft_create_elem(av[ac - 1]);
		maillon = maillon->next;
		ac--;
	}
	maillon->next = 0;
	return (tmp);
}

int main(int argc, char **argv)
{
	void *data2;
	void *data;
	t_list *list[5];
	t_list *maillon;

	data2 = (void*)9;
	data = (void*)5;
	maillon = ft_list_push_params(argc, argv);
	while (maillon->next)
	{
		printf("%s", maillon->data);
		maillon = maillon->next;
	}
	return (0);
}
