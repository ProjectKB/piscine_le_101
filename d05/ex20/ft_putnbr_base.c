/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_base.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 10:29:22 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/09 11:57:03 by loiberti    ###    #+. /#+    ###.fr     */
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

void	ft_convert_number(int nbr, char *base)
{
	int l_base;

	l_base = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_convert_number(nbr / l_base, base);
		ft_putchar(base[nbr % l_base]);
	}
	else
		ft_putchar(nbr + '0');
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (base[i])
	{
		if (base[i] == '+' && base[i] == '-')
			return ;
		i++;
	}
	if (ft_strlen(base) < 2)
		return ;
	i = -1;
	while (base[++i])
	{
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return ;
			j++;
		}
		j = 1;
	}
	ft_convert_number(nbr, base);
}

int		main()
{
	char base[] = "asf";
	ft_putnbr_base(1830, base);
	return (0);
}
