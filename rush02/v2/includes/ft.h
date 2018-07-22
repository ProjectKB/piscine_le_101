/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft.h                                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 13:40:55 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 12:25:51 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_H

# define FT_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

# define BUFF_SIZE 1

int					ft_display_result00(int x, int y, char *str);
int					match(char *s1, char *s2);
int					ft_display_result01(int x, int y, char *str);
int					ft_display_result02(int x, int y, char *str);
int					ft_display_result03(int x, int y, char *str);
int					ft_display_result04(int x, int y, char *str);
int					ft_atoi(char *str);
void				ft_putchar(char c);
int					ft_strlen(char *str);
void				ft_putnbr(int nb);
void				ft_putstr(char *str);

#endif
