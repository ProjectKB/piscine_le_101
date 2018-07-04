/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/03 10:40:17 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/04 11:34:38 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int n;

	i = 1;
	n = nb;
	if (nb < 0 || nb > 12)
		return (0);
	else if (!nb || nb == 1)
		return (1);
	while (i != n - 1)
	{
		nb += nb * i;
		i++;
	}
	return (nb);
}
