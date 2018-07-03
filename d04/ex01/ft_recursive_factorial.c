/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/03 10:40:17 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/03 11:40:30 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	else if (!nb || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

int main()
{
	printf("%d", ft_recursive_factorial(5));
	return (0);
}
