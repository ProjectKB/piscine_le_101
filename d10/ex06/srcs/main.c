/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   resolve.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 11:58:53 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/16 17:15:44 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "do_op.h"

int		ft_operator(char **av, int ac)
{
	if (*av[2] == '+')
		return (0);
	if (*av[2] == '-')
		return (1);
	if (*av[2] == '*')
		return (2);
	if (*av[2] == '/')
		return (3);
	if (*av[2] == '%')
		return (4);
	else
		return (5);
}

void	ft_function_table(int (*tab[5])(int, int))
{
	tab[0] = &ft_add;
	tab[1] = &ft_sub;
	tab[2] = &ft_mul;
	tab[3] = &ft_div;
	tab[4] = &ft_mod;
}

int		main(int argc, char **argv)
{
	int	(*tab[5])(int, int);
	int	arg;

	if (argc != 4)
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	ft_function_table(tab);
	arg = ft_operator(argv, argc);
	if (!(ft_atoi(argv[3])) && *argv[2] == '/')
		ft_putstr("Stop : division by zero");
	else if (!(ft_atoi(argv[3])) && *argv[2] == '%')
		ft_putstr("Stop : modulo by zero");
	else if ((ft_atoi(argv[1]) || ft_atoi(argv[3])) && arg != 5)
		ft_putnbr(tab[arg](ft_atoi(argv[1]), ft_atoi(argv[3])));
	else
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
