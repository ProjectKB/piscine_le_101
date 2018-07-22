/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 14:27:29 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 16:07:56 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/ft.h"
#include "../includes/ft_list.h"
#include "../includes/ft_verif_2.h"
#include "../includes/ft_verif_rush.h"
#include "../includes/ft_particular.h"
#include <stdio.h>
#include <string.h>


int		ft_calculate_y(char *buff)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (buff[i])
	{
		if (buff[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

int		ft_calculate_x(char *buff, int y)
{
	if (y == 0)
		return (0);
	return (ft_strlen(buff) / y - 1);
}

char 	*ft_create_str(void)
{
	int rt;
	char *str;
	int i;
	t_list *list;
	t_list *f_maillon;

	list = ft_create_elem();
	f_maillon = list;
	i = 0;
	while ((rt = read(0, &list->data, 1)) > 0)
	{
		list->next = ft_create_elem();
		list = list->next;
		i++;
	}
	str = (char*)malloc(sizeof(*str) * (i + 1));
		//return (NULL);
	i = 0;
	while (f_maillon)
	{
		str[i] = f_maillon->data;
		f_maillon = f_maillon->next;
		i++;
	}
	return (str);
}

/*void	ft_bonus_square_rectangle(int x, int y)
{
	ft_putstr("|| [rush0X] || [carre] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("] || [rectangle] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]\n");
}

void	ft_bonus_rectangle(int x, int y)
{

	ft_putstr("|| [rush0X] || [rectangle] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]\n");
}

void	ft_choose_bonus(int x, int y)
{
	if (x == y)
		ft_bonus_square_rectangle(x, y);
	else if (x < y || x > y)
		ft_bonus_rectangle(x, y);
}*/

int main(void)
{
	char *str;
	int y;
	int x;

	str = ft_create_str();
	y = ft_calculate_y(str);
	x = ft_calculate_x(str, y);
	if (y * x > 2147483647)
	{
		ft_putstr("aucune\n");
		return (0);
	}
	if (!(ft_particular_cases(x, y, str)))
		return (0);
	else if (x >= 1 || y >= 1)
	{
		if (ft_display_result00(x, y, str) == 1 ||
		ft_display_result01(x, y, str) == 1 || ft_display_result02(x, y, str)
		|| ft_display_result03(x, y, str) == 1 ||
		ft_display_result04(x, y, str) == 1)
			ft_putstr("\n");
		else
			ft_putstr("aucune\n");
	}
	return (0);
}
