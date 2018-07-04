/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_next_prime.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/04 11:37:13 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/04 11:37:34 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

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

int	ft_find_next_prime(nb)
{
	if (ft_is_prime(nb))
		return (nb);
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}
