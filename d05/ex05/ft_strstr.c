/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/03 16:36:07 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/09 10:17:26 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!to_find[i])
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (!to_find[j + 1])
				return (str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

int main()
{
	char str[] = "coucou";
	char x[] = "h";
	printf("%s", ft_strstr(str, x));
	printf("%s", strstr(str, x));
	return (0);
}
