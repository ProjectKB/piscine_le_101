/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_clear.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 16:29:24 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 17:25:20 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
t_list	*ft_list_last(t_list **begin_list);
t_list	*ft_list_push_params(int ac, char **av);

void	ft_list_clear(t_list **begin_list)
{
	t_list *maillon;
	t_list *tmp;

	maillon = *begin_list;
	while (maillon->next)
	{
		tmp = maillon->next;
		free(maillon);
		maillon = tmp;
	}
	*begin_list = NULL;
}

int main(int argc, char **argv)
{
	void *data2;
	void *data;
	t_list *list[5];
	t_list *maillon;
	int count = 0;

	data2 = (void*)9;
	data = (void*)5;
	maillon = ft_list_push_params(argc, argv);
	while (count < 5)
	{
		list[count] = maillon;
		maillon = maillon->next;
		count++;
	}
	count = 0;
	ft_list_clear(list);
		//printf("%s", list[count]->data);
	return (0);
}
