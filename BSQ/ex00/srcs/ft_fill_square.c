/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_fill_square.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 16:09:49 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 16:33:57 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "my.h"

void	ft_fill_square(t_tmp *tmp, char **tab, char *str)
{
	int		x_tmp;
	int		y_tmp;
	t_char	bsq_char;

	x_tmp = tmp->save_x;
	y_tmp = tmp->save_y;
	bsq_char = ft_return_char_for_bsq(str);
	while (y_tmp != tmp->save_y + tmp->nb)
	{
		while (x_tmp != tmp->save_x + tmp->nb)
		{
			tab[y_tmp][x_tmp] = bsq_char.full;
			x_tmp++;
		}
		x_tmp = tmp->save_x;
		y_tmp++;
	}
}
