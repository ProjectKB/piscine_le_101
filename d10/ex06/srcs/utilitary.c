/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   utilitary.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 12:08:04 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/16 14:51:31 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int        ft_atoi(char *str)
{
	int		n;
	int		r;
	int		i;

	i = 0;
	n = 0;
	r = 0;
	while (str[i] <= ' ' || (str[i] == '+' && (str[i + 1] != '+' ||
					str[i + 1] != '-')))
		i++;
	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] - '0';
		i++;
	}
	if (n)
		r = -r;
	return (r);
}
