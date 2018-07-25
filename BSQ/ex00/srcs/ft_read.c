/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_read.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/25 16:33:14 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 20:27:36 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "my.h"

void	ft_short_create_str(char *str, t_list *f_maillon, t_list *list)
{
	int	i;

	i = 0;
	list = f_maillon;
	while (f_maillon)
	{
		str[i] = f_maillon->data;
		f_maillon = f_maillon->next;
		i++;
	}
	ft_list_clear(list);
}

char	*ft_create_str(char **argv, int argc, int arg, char *str)
{
	int		rt;
	int		i;
	int		fd;
	t_list	*list;
	t_list	*f_maillon;

	list = ft_create_elem();
	f_maillon = list;
	i = 0;
	if ((fd = ft_choose_fd(argc, arg, argv)) == -1)
		return (NULL);
	while ((rt = read(fd, &list->data, 1)) > 0)
	{
		list->next = ft_create_elem();
		list = list->next;
		i++;
	}
	if (rt == -1)
		return (NULL);
	if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	ft_short_create_str(str, f_maillon, list);
	if ((close(fd)) == -1)
		return (NULL);
	return (str);
}

int		ft_find_y(char *str)
{
	int		i;
	int		j;
	int		r;
	char	tab[10];

	i = 0;
	j = 0;
	r = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	i = 0;
	while (tab[i])
	{
		r = r * 10 + tab[i] - '0';
		i++;
	}
	return (r);
}

int		ft_find_x(char *str)
{
	int		i;
	int		x;
	int		y;

	i = 1;
	x = 0;
	y = 0;
	while (str[i - 1] != '\n')
		i++;
	while (str[i] != '\n')
	{
		i++;
		x++;
	}
	return (x);
}

int		ft_find_length_first_line(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}
