/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_memory.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 09:45:44 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 15:10:29 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void    ft_convert_number(int nbr, char *base)
{
	int    l_base;

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
	int		i;
	int		j;

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

void ft_pustr(char *str, int i)
{
	i = 0;
	ft_putchar(' ');
	while (i < 16)
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_print_memory(void *addr, unsigned int size)
{
	int i;
	int j;
	int k;
	char **ptr;
	char *ptr2;

	i = 0;
	j = 0;
	k = 0;
	if (size <= 0)
		return ;
	ptr = addr;
	ptr2 = addr;
	while (ptr2[i])
	{
		while (k < 16)
		{
			if (!k)
			{
				ft_putnbr_base((int)ptr[i], "0123456789ABCDEF");
				ft_putchar(':');
				ft_putchar(' ');
			}
			ft_putnbr_base((int)ptr2[i], "0123456789ABCDEF");
			j++;
			if (j == 2)
			{
				ft_putchar(' ');
				j = 0;
			}
			i++;
			k++;
		}
		ft_pustr(ptr2, i);
		k = 0;
	}
}



int main()
{
	char addr2[] = "Salut les aminches c'est cool sh";
	ft_print_memory(addr2, 32);
	return (0);
}
