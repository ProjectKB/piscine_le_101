/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_particular_case.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/22 13:52:52 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 15:58:34 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/ft.h"
#include "../includes/ft_list.h"
#include "../includes/ft_verif_2.h"
#include "../includes/ft_verif_rush.h"

void	ft_particular_case_1(int x, int y, char *str)
{
	ft_display_result02(x, y, str);
	ft_putstr(" || ");
	ft_display_result03(x, y, str);
	ft_putstr(" || ");
	ft_display_result04(x, y, str);
	ft_putstr("\n");
}

void	ft_particular_case_2(int x, int y, char *str)
{
	ft_display_result02(x, y, str);
	ft_putstr(" || ");
	ft_display_result04(x, y, str);
	ft_putstr("\n");
}

void	ft_particular_case_3(int x, int y, char *str)
{
	ft_display_result03(x, y, str);
	ft_putstr(" || ");
	ft_display_result04(x, y, str);
	ft_putstr("\n");
}

int	ft_particular_cases(int x, int y, char *str)
{
	if (x <= 0 || y <= 0)
	{
		ft_putstr("aucune\n");
		return (0);
	}
	if (x == 1 && y == 1 && str[0] == 'A')
	{
		ft_particular_case_1(x, y, str);
		return (0);
	}
	if (x == 1 && y > 1 && str[0] == 'A' && str[ft_strlen(str) - 2] == 'C')
	{
		ft_particular_case_2(x, y, str);
		return (0);
	}
	else if (x > 1 && y == 1 && str[0] == 'A' && str[x - 1] == 'C')
	{
		ft_particular_case_3(x, y, str);
		return (0);
	}
	return (1);
}
