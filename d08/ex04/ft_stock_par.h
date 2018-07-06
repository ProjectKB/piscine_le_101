/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_stock_par.h                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 16:39:53 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/06 16:45:11 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_STOCK_PAT_H

#define FT_STOCK_PAT_H

typedef struct s_stock_par
{
	int size_params;
	char *str;
	char *copy;
	char **tab;
}	t_stock_par;

#endif
