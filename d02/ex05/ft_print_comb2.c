/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/03 09:24:35 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/05 11:30:32 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_char(char a, char b, char c, char d)
{
	if ((c >= a && d >= b + 1) || c > a)
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
		if (!(a == '9' && b == '8'))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_algo(char a, char b, char c, char d)
{
	while (a != '9' + 1)
	{
		while (b != '9' + 1)
		{
			while (c != '9' + 1)
			{
				while (d != '9' + 1)
				{
					ft_print_char(a, b, c, d);
					d++;
				}
				d = '0';
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}

void	ft_print_comb2(void)
{
	ft_algo('0', '0', '0', '1');
}
