/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_push_params.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 14:50:43 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 15:30:34 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*maillon;
	t_list	*f_maillon;

	maillon = ft_create_elem(av[ac - 1]);
	f_maillon = maillon;
	ac--;
	while (ac > 0)
	{
		maillon->next = ft_create_elem(av[ac - 1]);
		maillon = maillon->next;
		ac--;
	}
	maillon->next = 0;
	return (f_maillon);
}
