/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_power.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/03 11:18:45 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/03 11:38:16 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int r;

	r = nb;
	if (!power)
		return (1);
	else if (power < 0 || !nb)
		return (0);
	while (power != 1)
	{
		nb *= r;
		power--;
	}
	return (nb);
}

int main()
{
	printf("%d", ft_iterative_power(0, 1));
	return (0);
}
