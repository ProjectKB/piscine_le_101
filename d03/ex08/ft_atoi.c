/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/02 21:04:44 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/02 21:19:22 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *str)
{
	int r;
	int n;
	int p;

	r = 0;
	n = 0;
	p = 0;
	while (str[p] < ' ' || (str[p] == '+' && str[p + 1] != '+'))
		p++;
	if (str[p] == '-')
	{
		n = -1;
		p++;
	}
	while (str[p] >= '0' && str[p] <= '9')
	{
		r = r * 10 + str[p] - '0';
		p++;
	}
	if (n)
		r = -r;
	return (r);
}

int main()
{
	char str[] = "+000a123";
	printf("%d", ft_atoi(str));
	return (0);
}
