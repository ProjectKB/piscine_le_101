/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 12:12:28 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/09 16:44:01 by loiberti    ###    #+. /#+    ###.fr     */
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
