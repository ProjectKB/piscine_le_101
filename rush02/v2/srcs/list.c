/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   list.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 17:39:51 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 16:05:24 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/ft_list.h"

t_list    *ft_create_elem(void)
{
	t_list    *maillon;

	maillon = (t_list*)malloc(sizeof(*maillon));
//		return (NULL);
	maillon->next = NULL;
	return (maillon);
}
