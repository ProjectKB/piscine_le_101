/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 14:27:29 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/21 21:23:33 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/ft.h"
#include "../includes/ft_list.h"
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
	str = (char*)malloc(sizeof(*str) * i + 1);
	i = 0;
	while (f_maillon)
	{
		str[i] = f_maillon->data;
		f_maillon = f_maillon->next;
		i++;
	}
	return (str);
}

int main(int argc, char **argv)
{
	char *str;
	int x;
	int y;

	(void)argc;
	str = ft_create_str();
	y = ft_calculate_y(str);
	x = ft_calculate_x(str, y);
	printf("%d\n%d\n", x, y);
	ft_putstr(argv[1]);
}
