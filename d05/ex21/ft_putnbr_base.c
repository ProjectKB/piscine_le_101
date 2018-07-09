/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_base.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 10:29:22 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/09 15:08:40 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

	int ft_atoi(char *str)
{
	int r;
	int n;
	int p;

	r = 0;
	n = 0;
	p = 0;
	while (str[p] <= ' ' || (str[p] == '+' && (str[p + 1] != '+' &&
					str[p + 1] != '-')))
		p++;
	if (str[p] == '-')
	{
		n = -1;
		p++;
	}
	while (str[p] >= '0' && str[p] <= '9')
	{
		r = r * 10 + str[p] - '0';
		p++;
	}
	if (n)
		r = -r;
	return (r);
}

int test(int nb, char *base)
{
	int r;
	int i;
	int l_base;
	int tab[1000];

	l_base = ft_strlen(base);
	i = 0;
	r = 0;
	while (nb / l_base != 0)
	{
		tab[i] = nb % l_base;
		nb = nb / l_base;
		i++;
	}
	tab[i] = nb;
	r += tab[i];
	while (i != 0)
	{
		r = r * 10 + tab[i - 1];
		i--;
	}
	return (r);
}

int		main()
{
	int nb;
	int a;
	char base[] = "0123456789ABCDEF";

	nb = ft_atoi("1830");
	printf("%d", test(nb, base));
	return (0);
}
