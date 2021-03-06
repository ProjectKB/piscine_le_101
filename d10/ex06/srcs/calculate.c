/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   calculate.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 12:02:40 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/16 17:19:13 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);

int		ft_add(int a, int b)
{
	return (a + b);
}

int		ft_sub(int a, int b)
{
	return (a - b);
}

int		ft_mul(int a, int b)
{
	return (a * b);
}

int		ft_div(int a, int b)
{
	if (!b)
		return (0);
	else
		return (a / b);
}

int		ft_mod(int a, int b)
{
	if (!b)
		return (0);
	else
	{
		return (a % b);
	}
}
