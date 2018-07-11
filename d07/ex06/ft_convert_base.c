/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_convert_base.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/11 15:41:12 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/11 22:25:39 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int    ft_recursive_power(int nb, int power)
{
	if (!power)
		return (1);
	else if (power < 0 || !nb)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

int    ft_atoi(char *str)
{
	int    r;
	int    n;
	int    p;

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

int		ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		i++;
	return (i);
}

int		*ft_atoi_base(char *nbr, char *base)
{
	int i;
	int j;
	int k;
	int *tab;
	int s;

	i = 0;
	j = 0;
	k = 0; 
	s = ft_strlen(nbr);
	tab = (int*)malloc(sizeof(*tab) * s);
	while (i < s)
	{
		while (nbr[i] != base[j])
		{
			j++;
		}
		tab[k] = j;
		k++;
		j = 0;
		i++;
	}
	return (tab);
}

// int		*ft_convert_nbr_to_dec()

int main()
{
	char nbr[] = "7CCCCC";
	char base[] = "0123456789ABCDEF";
	int *tab = ft_atoi_base(nbr, base);
	int s = ft_strlen(nbr);
	int i = 0;
	while (i < s)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}
