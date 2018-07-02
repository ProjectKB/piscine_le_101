/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrev.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/02 20:35:45 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/02 21:04:20 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strrev(char *str)
{
	int start;
	int end;
	int swap;
	
	start = 0;
	end = 0;
	while (str[end + 1])
		end++;
	while (start < end)
	{
		swap = str[start];
		str[start] = str[end];
		str[end] = swap;
		start++;
		end--;
	}
	return (str);
}

int main()
{
	char str[] = "helloa";
	printf("%s", ft_strrev(str));
	return (0);
}
