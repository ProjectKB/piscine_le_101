/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_at.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 17:26:28 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 17:49:15 by loiberti    ###    #+. /#+    ###.fr     */
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

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list *maillon;
	unsigned int count;

	maillon = begin_list;
	count = 0;
	while (count < nbr - 1)
	{
		if (!(maillon->next))
			return (0);
		maillon = maillon->next;
		count++;
	}
	return (maillon);
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
	/*while (maillon->next)
	{
		printf("%s", maillon->data);
		maillon = maillon->next;
	}*/
	printf("%s", ft_list_at(maillon, 4)->data);
	return (0);
}
