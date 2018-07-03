/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_str_is_alpha.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/03 20:35:14 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/03 20:55:06 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 && str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	char st[4];
	st[1] = 6;
	printf("%d", ft_str_is_printable(st));
	return (0);
}
