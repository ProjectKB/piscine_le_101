/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 12:12:28 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/09 12:12:35 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int				i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	v_max;
	unsigned int	z;

	z = 0;
	v_max = ft_strlen(dest) + 1;
	if (size > v_max || size < z)
		return (-5);
	else
		return (ft_strlen(src));

}

int					main()
{
	const char b[] = "salutationqert";
	char c[] = "salutationaert";
	char a[] = "01234";

	unsigned int i = 4;
	unsigned long j = 6;
	printf("%lu\n", strlcpy(a, b, i));
	printf("%lu\n", ft_strlcpy(a, c, i));
	return (0);
}
