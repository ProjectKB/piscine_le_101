/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_return_char_for_bsq.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/25 20:26:16 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 20:27:02 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "my.h"

t_char	ft_return_char_for_bsq(char *str)
{
	t_char	bsq_char;
	int		s;
	int		tmp;

	s = ft_find_length_first_line(str);
	tmp = s;
	bsq_char.empty = str[tmp - 3];
	tmp = s;
	bsq_char.obstacle = str[tmp - 2];
	tmp = s;
	bsq_char.full = str[tmp - 1];
	return (bsq_char);
}
