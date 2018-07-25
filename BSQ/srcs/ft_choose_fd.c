/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_choose_fd.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/25 14:15:58 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 22:37:04 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "my.h"

int		ft_choose_fd(int argc, int arg, char **argv)
{
	int	fd;

	fd = 0;
	if (argc == 1)
		return (fd);
	else
	{
		fd = open(argv[arg + 1], O_RDWR);
		return (fd);
	}
}
