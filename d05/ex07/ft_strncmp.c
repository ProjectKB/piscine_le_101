/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/03 18:03:22 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/03 18:17:05 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
		i++;
	return (*s1 - *s2);
}

int main()
{
	char a[] = "allocour";
	char b[] = "alloci";
	printf("%d", ft_strncmp(a, b, 4));
	printf("%d", strncmp(a, b, 4));
	return (0);
}
