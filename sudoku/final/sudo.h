/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   sudo.h                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/15 17:39:34 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 18:21:48 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SUDO_H

# define SUDO_H

# include <stdlib.h>
# include <unistd.h>

int		ft_strlen(char*str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_convert_char(char c);
int		**ft_stock_line(int argc, char **argv, int **tab);
void	ft_display_tab(int **tab);
int		ft_missing_line(int **tab, int x, int v);
int		ft_missing_column(int **tab, int y, int v);
int		ft_missing_block(int **tab, int x, int y, int v);
int		ft_solved_sudoku(int **tab, int position);
int		ft_verif(int argc, char **argv);
int		ft_verif_size_arg(int argc, char **argv);
int		ft_verif_line_column_block(int **tab);

#endif
