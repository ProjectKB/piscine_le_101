/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_foreach.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 10:35:00 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/16 18:12:27 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = -1;
	while (++i < length)
		f(tab[i]);
}

int		main()
{
	int tab[5] = {1, 2, 3, 4};
	ft_foreach(tab, 4, &ft_putnbr);
	return (0);
}
