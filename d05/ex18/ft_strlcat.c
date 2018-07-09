/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/08 11:44:50 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/09 16:42:54 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int				ft_strlen(char *str)
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
		return (-5);
	else if (size == ft_strlen(dest) + 1)
		return (r - 1);
	else if (size > ft_strlen(dest) + 1)
		return (-5);
	else
		r = ft_strlen(src) + size;
	return (r);
}
