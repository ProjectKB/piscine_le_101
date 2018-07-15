/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   verif.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/15 18:00:02 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 18:27:43 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "sudo.h"

int		ft_verif(int argc, char **argv)
{
	int	i;
	int	j;
	int	count;

	i = 1;
	j = 0;
	count = 0;
	if (argc != 10)
		return (0);
	while (argv[i])
	{
		while (argv[i][j])
		{
			if ((argv[i][j] < '1' || argv[i][j] > '9') && argv[i][j] != '.')
				return (0);
			if (argv[i][j] >= '1' && argv[i][j] <= '9')
				count++;
			j++;
		}
		j = 0;
		i++;
	}
	if (count < 17)
		return (0);
	return (1);
}

int		ft_verif_size_arg(int argc, char **argv)
{
	int	i;

	i = 1;
	(void)argc;
	while (argv[i])
	{
		if (ft_strlen(argv[i]) != 9)
			return (0);
		i++;
	}
	return (1);
}

int		ft_verif_line_column_block(int **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			if (tab[i][j] == 0)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}
