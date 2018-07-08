/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/08 10:07:24 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/08 11:04:23 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdio.h>

struct	s_stock_par *ft_param_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_par *par);

int	main(int argc, char **argv)
{
	t_stock_par *test;
	
	test = ft_param_to_tab(argc, argv);
	ft_show_tab(test);
	return (0);
}
