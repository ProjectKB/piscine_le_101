/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_concat_params.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 16:02:48 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/05 16:54:29 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		s;
	char	*arg;

	i = 1;
	s = 0;
	while (i < argc)
	{
		s += ft_strlen(argv[i]);
		i++;
	}
	arg = (char*)malloc(sizeof(*arg) * (s + argc - 1));
	if (!arg)
		exit(0);
	i = 1;
	while (i < argc)
	{
		ft_strcat(arg, argv[i]);
		if (i != argc - 1)
			ft_strcat(arg, "\n");
		i++;
	}
	return (arg);
}

int		main(int argc, char **argv)
{
	printf("%s", ft_concat_params(argc, argv));
	return (0);
}
