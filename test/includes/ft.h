/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft.h                                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 13:40:55 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/21 18:05:51 by loiberti    ###    #+. /#+    ###.fr     */
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

int					ft_atoi(char *str);
void				ft_putchar(char c);
int					ft_strlen(char *str);
void				ft_putnbr(int nb);
void				ft_putstr(char *str);

#endif
