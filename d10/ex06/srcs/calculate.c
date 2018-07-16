/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   calculate.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 12:02:40 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/16 13:25:46 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putstr(char *str);

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
	{
		ft_putstr("Stop : division by zero");
		return (0);
	}
	return (a / b);
}

int		ft_mod(int a, int b)
{
	if (!b)
	{
		ft_putstr("Stop : modulo by zero");
		return (0);
	}
	return (a % b);
}
