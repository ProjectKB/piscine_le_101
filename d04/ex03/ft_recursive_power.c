/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_power.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/03 11:18:45 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/03 11:48:10 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (!power)
		return (1);
	else if (power < 0 || !nb)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}

int main()
{
	printf("%d", ft_recursive_power(4, 3));
	return (0);
}
