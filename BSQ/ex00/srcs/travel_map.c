/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   travel_map.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kabouama <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 20:15:51 by kabouama     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 21:13:22 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "my.h"

int		check_top(char **tab, t_pos loc, t_tmp *tmp, t_char bsq_char)
{
	int		temp_y;

	temp_y = tmp->y;
	while (tmp->y >= loc.y)
	{
		if (tab[tmp->y][tmp->x] == bsq_char.obstacle)
			return (0);
		tmp->y--;
	}
	tmp->y = temp_y;
	return (1);
}

int		check_left(char **tab, t_pos loc, t_tmp *tmp, t_char bsq_char)
{
	int		temp_x;

	temp_x = tmp->x;
	while (tmp->x >= loc.x)
	{
		if (tab[tmp->y][tmp->x] == bsq_char.obstacle)
			return (0);
		tmp->x--;
	}
	tmp->x = temp_x;
	return (1);
}

void	travel_map(char **tab, t_tmp *tmp, char *str)
{
	t_pos		loc;
	t_char		bsq_char;

	loc.y = 0;
	bsq_char = ft_return_char_for_bsq(str);
	while (loc.y < tmp->taille)
	{
		loc.x = 0;
		while (loc.x < tmp->len)
		{
			tmp->y = loc.y;
			tmp->x = loc.x;
			tmp->tmp_nb = 0;
			if (tab[loc.y][loc.x] == bsq_char.obstacle)
				loc.x++;
			else
			{
				check_diag(tab, loc, tmp, bsq_char);
				loc.x++;
			}
		}
		loc.y++;
	}
}
