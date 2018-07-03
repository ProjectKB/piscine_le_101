/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcapitalize.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/03 18:35:50 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/03 19:19:05 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] < 48 ||
		(str[i - 1] > 57 && str[i - 1] < 65) || (str[i - 1] > 90 &&
		str[i - 1] < 97) || str[i - 1] > 122))
			str[i] -= 32;
		i++;
	}
	return (str);
}

int main()
{
	char str[] = "123Hello /*/*/hghgh a";
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
