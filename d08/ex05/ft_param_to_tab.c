/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_param_to_tab.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 16:37:11 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/08 11:33:22 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*copy;
	int		i;
	int		s;

	i = 0;
	s = 0;
	while (src[s])
		s++;
	if (!(copy = (char*)malloc(sizeof(*copy) * s)))
		return (NULL);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int				i;
	t_stock_par		*param;

	i = 0;
	if (!(param = (t_stock_par*)malloc(sizeof(*param) * ac + 1)))
		return (NULL);
	while (i != ac)
	{
		param[i].size_param = ft_strlen(av[i]);
		param[i].str = av[i];
		param[i].copy = ft_strdup(av[i]);
		param[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	param[i].str = 0;
	return (param);
}
