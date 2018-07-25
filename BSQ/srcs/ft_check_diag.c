/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_check_diag.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/25 21:09:02 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 22:36:59 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "my.h"

void	ft_cut_check_diag(t_pos loc, t_tmp *tmp)
{
	tmp->save_y = loc.y;
	tmp->save_x = loc.x;
	tmp->nb++;
}

void	ft_cut_check_diag2(t_pos loc, t_tmp *tmp)
{
	tmp->save_y = loc.y;
	tmp->save_x = loc.x;
	tmp->nb++;
}

int		check_diag(char **tab, t_pos loc, t_tmp *tmp, t_char bsq_char)
{
	tmp->tmp_nb = 0;
	while (tmp->y < tmp->taille && tmp->x < tmp->len &&
			tab[tmp->y][tmp->x] == '.')
	{
		if (check_top(tab, loc, tmp, bsq_char) == 1)
		{
			if (check_left(tab, loc, tmp, bsq_char) == 1)
			{
				tmp->tmp_nb++;
				if (tmp->tmp_nb > tmp->nb)
					ft_cut_check_diag(loc, tmp);
			}
			else
				return (0);
		}
		else if (tmp->y == 0 && tmp->x == 0)
			ft_cut_check_diag2(loc, tmp);
		else
			return (0);
		tmp->y++;
		tmp->x++;
	}
	return (1);
}
