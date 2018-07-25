/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kabouama <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 14:18:13 by kabouama     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 20:54:32 by kabouama    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "my.h"

void	test_free(char **tab)
{
	int		y;

	y = 0;
	while (tab[y])
	{
		free(tab[y]);
		y++;
	}
}

char	**testest(char *str, t_tmp tmp)
{
	char	**tab;
	int		cpt;
	int		i;

	cpt = 0;
	i = 0;
	if ((ft_check_empty_file(str)) && (ft_check_char(str) == 1) &&
			ft_check_first_line(str) == 1 && (ft_check_number_of_line(str)))
	{
		tab = ft_create_tab(str, cpt, i);
		tmp.taille = ft_find_y(str);
		tmp.len = ft_find_x(str);
		travel_map(tab, &tmp, str);
		ft_fill_square(&tmp, tab, str);
		ft_print_words_table(tab);
	}
	else
	{
		ft_putstr2("map error\n");
		return (0);
	}
	return (tab);
}

char	**ft_boucle(char *str, int argc, char *argv[], t_tmp tmp)
{
	char	**tab;
	int		arg;

	arg = 0;
	while (arg < argc - 1)
	{
		str = ft_create_str(argv, argc, arg, str);
		if (str == NULL && argc < 3)
		{
			ft_putstr2("map error\n");
			return (0);
		}
		else if (str == NULL)
			ft_putstr("map error\n");
		else
			tab = testest(str, tmp);
		arg++;
		if (arg != argc - 1)
			ft_putchar('\n');
		//		free(str);
	}
	return (tab);
}

int		main(int argc, char **argv)
{
	int		arg;
	char	*str;
	char	**tab;
	t_tmp	tmp;

	tmp.save_y = 0;
	tmp.save_x = 0;
	tmp.nb = 0;
	arg = 0;
	str = NULL;
	if (argc > 1)
	{
		tab = ft_boucle(str, argc, argv, tmp);
//		test_free(tab);
//		free(tab);
		return (0);
	}
	else
	{
		str = ft_create_str(argv, argc, arg, str);
		tab = testest(str, tmp);
	}
	return (0);
}
