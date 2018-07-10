/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr_non_printable.c                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 08:54:06 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 08:55:31 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_convert_number(int nbr, char *base)
{
	int	l_base;

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
	int	i;
	int	j;

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

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			ft_putnbr_base((int)str[i], "0123456789ABCDEF");
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
