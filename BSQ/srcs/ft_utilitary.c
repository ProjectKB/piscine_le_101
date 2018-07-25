/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_utilitary.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 13:44:21 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 22:39:39 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "my.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar('0' + nb % 10);
	}
}

int		ft_atoi(char *str)
{
	int		index;
	long	nb;
	int		neg;

	index = 0;
	neg = 0;
	nb = 0;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == 32)
		index++;
	if (str[index] == 45 || str[index] == 43)
	{
		if (str[index] == 45)
			neg = 1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		nb = (nb * 10) + (str[index] - 48);
		index++;
	}
	if (neg == 1)
		nb = -nb;
	return (nb);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
