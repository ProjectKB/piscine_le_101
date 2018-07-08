/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush04.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 22:32:27 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/08 08:45:05 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_f_line(int x, char a, char b, char c)
{
	int		i;

	i = 1;
	ft_putchar(a);
	if (x > 1)
	{
		while (i != x - 1)
		{
			ft_putchar(b);
			i++;
		}
		ft_putchar(c);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		i;
	char	a;
	char	b;
	char	c;

	if (x <= 0 || y <= 0)
		return ;
	i = 1;
	print_f_line(x, 'A', 'B', 'A');
	if (y > 1)
	{
		while (i != y - 1)
		{
			print_f_line(x, 'B', ' ', 'B');
			i++;
		}
		print_f_line(x, 'C', 'B', 'C');
	}
}
