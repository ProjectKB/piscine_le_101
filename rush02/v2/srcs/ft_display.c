/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_display.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/22 12:20:49 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 15:54:19 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/ft.h"
#include "../includes/ft_verif_rush.h"
#include "../includes/ft_verif_2.h"

int    ft_display_result00(int x, int y, char *str)
{
	char *str2;

	str2 = ft_putofstr(rush00(x, y), x, y);
	if (match(str, str2) == 1)
	{
		ft_putstr("[colle-00] [");
		ft_putnbr(x);
		ft_putstr("] [");
		ft_putnbr(y);
		ft_putstr("]");
		return (1);
	}
	return (0);
}
int    ft_display_result01(int x, int y, char *str)
{
	char *str2;

	str2 = ft_putofstr(rush01(x, y), x, y);
	if (match(str, str2) == 1)
	{
		ft_putstr("[colle-01] [");
		ft_putnbr(x);
		ft_putstr("] [");
		ft_putnbr(y);
		ft_putstr("]");
		return (1);
	}
	return (0);
}

int    ft_display_result02(int x, int y, char *str)
{
	char *str2;

	str2 = ft_putofstr(rush02(x, y), x, y);
	if (match(str, str2) == 1)
	{
		ft_putstr("[colle-02] [");
		ft_putnbr(x);
		ft_putstr("] [");
		ft_putnbr(y);
		ft_putstr("]");
		return (1);
	}
	return (0);
}

int    ft_display_result03(int x, int y, char *str)
{
	char *str2;

	str2 = ft_putofstr(rush03(x, y), x, y);
	if (match(str, str2) == 1)
	{
		ft_putstr("[colle-03] [");
		ft_putnbr(x);
		ft_putstr("] [");
		ft_putnbr(y);
		ft_putstr("]");
		return (1);
	}
	return (0);
}

int    ft_display_result04(int x, int y, char *str)
{
	char *str2;

	str2 = ft_putofstr(rush04(x, y), x, y);
	if (match(str, str2) == 1)
	{
		ft_putstr("[colle-04] [");
		ft_putnbr(x);
		ft_putstr("] [");
		ft_putnbr(y);
		ft_putstr("]");
		return (1);
	}
	return (0);
}
