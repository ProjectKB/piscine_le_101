/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_size.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 13:42:02 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 14:22:01 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_push_front(t_list **begin_list, void *data);

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

int main()
{
	void *data2;
	t_list *list[5];

	data2 = (void*)9;
	ft_list_push_back(list, data2);
	ft_list_push_front(list, data2);
	printf("%d", ft_list_size(list));
	return (0);
}
