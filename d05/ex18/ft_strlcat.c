/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/08 11:44:50 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/08 17:31:54 by loiberti    ###    #+. /#+    ###.fr     */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	r;
	unsigned int	z;

	z = 0;
	r = ft_strlen(src) + size;
	if (size < z)
		abort();
	else if (size == ft_strlen(dest) + 1)
		return (r - 1);
	else if (size > ft_strlen(dest) + 1)
		abort();
	else
		r = ft_strlen(src) + size;
	return (r);
}

int					main()
{
	const char b[] = "salut";
	char c[] = "salut";
	char a[] = "0123456789";

	unsigned int i = 5;
	printf("%d\n", ft_strlcat(a, c, i));
	printf("%lu\n", strlcat(a, b, i));
	return (0);
}
