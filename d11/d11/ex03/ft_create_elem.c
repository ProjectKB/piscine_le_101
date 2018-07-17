/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_create_elem.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 11:25:46 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 11:28:38 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*maillon;

	maillon = (t_list*)malloc(sizeof(*maillon));
	maillon->data = data;
	maillon->next = NULL;
	return (maillon);
}
