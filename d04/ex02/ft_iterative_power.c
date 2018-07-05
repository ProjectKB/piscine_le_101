/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_power.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/03 11:18:45 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/05 11:42:21 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	r;

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
