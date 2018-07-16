/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_count_if.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 11:12:27 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/16 11:14:09 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int count;

	i = -1;
	while (tab[++i])
	{
		if (f(tab[i]) == 1)
			count++;
	}
	return (count);
}
