/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   resolve.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 11:58:53 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/16 13:38:52 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_mul(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);
int		ft_atoi(char *str);
void	ft_putchar(char c);

int		ft_operator(char **av, int ac)
{
	if (av[3] == '+')
		return (0);
	if (av[3] == '-')
		return (1);
	if (av[3] == '*')
		return (2);
	if (av[3] == '/')
		return (3);
	if (av[3] == '%')
		return (4);
	else
		return (5);
}

int		main(int argc, char **argv)
{
	int	(*tab[5])(int, int);
	int	arg;

	arg = ft_operator(argv, argc);
	tab[0] = &ft_add;
	tab[1] = &ft_sub;
	tab[2] = &ft_mul;
	tab[3] = &ft_div;
	tab[4] = &ft_mod;
	if ((ft_atoi(argv[1]) || ft_atoi(argv[3])) && argc == 4 && arg != 5)
	{
		tab[arg](ft_atoi(argv[1]), ft_atoi(argv[3]));
	}
	else
	{
		ft_putchar('0');
		ft_putchar('\n');
	}
	return (0);
}
