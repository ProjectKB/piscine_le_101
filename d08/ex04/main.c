/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/08 10:07:24 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/08 10:10:40 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_stock_par.h"

struct s_stock_par *ft_param_to_tab(int ac, char **av);

int	main(int argc, char **argv)
{
	ft_param_to_tab(argc, argv);
	return (0);
}
