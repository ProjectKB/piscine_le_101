/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_fibonacci.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/03 11:48:24 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/03 12:15:01 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (!index)
		return (0);
	else if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main()
{
	printf("%d", ft_fibonacci(3));
	return (0);
}
