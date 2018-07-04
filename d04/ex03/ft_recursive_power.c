/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_recursive_power.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/04 11:35:51 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/04 11:36:00 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (!power)
		return (1);
	else if (power < 0 || !nb)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
