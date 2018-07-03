/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is_prime.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/03 13:37:54 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/03 14:02:58 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i != 10)
	{
		if (nb % i == 0 && i != nb)
			return (0);
		i++;
	}
	return (1);
}

int ft_find_next_prime(nb)
{
	if (ft_is_prime(nb))
		return (nb);
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}

int	main()
{
	printf("%d", ft_find_next_prime(-50000));
	return (0);
}
