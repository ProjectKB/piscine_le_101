/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_verif.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/24 11:09:54 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 16:38:22 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "my.h"

int	ft_check_first_line(char *str)
{
	int		x;
	int		i;
	t_char	coucou;

	x = ft_find_length_first_line(str);
	i = 0;
	coucou = ft_return_char_for_bsq(str);
	if (str[x + 1] != coucou.empty && str[x + 1] != coucou.obstacle)
		return (0);
	if (str[x] != '\n')
		return (0);
	x -= 4;
	while (x > 0)
	{
		if (!(str[x] >= '0' && str[x] <= '9'))
		{
			return (0);
		}
		x--;
	}
	return (1);
}

int	ft_check_char(char *str)
{
	int		i;
	t_char	check_char;

	i = ft_find_length_first_line(str);
	check_char = ft_return_char_for_bsq(str);
	while (str[i])
	{
		if (str[i] != check_char.empty && str[i] != check_char.obstacle &&
		str[i] != '\n')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_check_empty_file(char *str)
{
	int		i;

	i = 0;
	if (str[i] < 32)
		return (0);
	return (1);
}

int	ft_check_number_of_line(char *str)
{
	int		y;
	int		i;
	int		count;

	y = ft_find_y(str);
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			count++;
		i++;
	}
	count--;
	if (count != y)
		return (0);
	return (1);
}
