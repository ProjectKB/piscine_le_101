/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   my.h                                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 13:40:55 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 21:20:34 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef MY_H

# define MY_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>

void				ft_putchar(char c);
void				ft_putchar2(char c);
void				ft_putstr(char *str);
void				ft_putstr2(char *str);
void				ft_putnbr(int nb);
int					ft_atoi(char *str);
int					ft_strlen(char *str);
char				**tab_base(char *argv[]);
char				**ft_create_tab(char *str, int cpt, int i);
void				ft_print_words_table(char **tab);
int					ft_find_x(char *str);
int					ft_find_y(char *str);
char				*ft_create_str(char **argv, int argc, int arg, char *str);
int					ft_find_length_first_line(char *str);
void				free_test(char **tab);

typedef struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;
t_list				*ft_create_elem(void);

typedef struct		s_tmp
{
	int				save_y;
	int				save_x;
	int				y;
	int				x;
	int				nb;
	int				tmp_nb;
	int				taille;
	int				len;
}					t_tmp;

typedef struct		s_pos
{
	int				x;
	int				y;
	int				i;
}					t_pos;

typedef struct		s_char
{
	char			empty;
	char			obstacle;
	char			full;
}					t_char;

void				travel_map(char **tab, t_tmp *tmp, char *str);
void				ft_fill_square(t_tmp *tmp, char **tab, char *str);
int					check_diag(char **tab, t_pos loc, t_tmp *tmp,
					t_char bsq_char);
void				ft_cut_check_diag(t_pos loc, t_tmp *tmp);
void				ft_cut_check_diag2(t_pos loc, t_tmp *tmp);
int					check_top(char **tab, t_pos loc, t_tmp *tmp,
					t_char bsq_char);
int					check_left(char **tab, t_pos loc, t_tmp *tmp,
					t_char bsq_char);
t_char				ft_return_char_for_bsq(char *str);
void				ft_list_clear(t_list *begin_list);
int					ft_check_first_line(char *str);
int					ft_check_char(char *str);
int					ft_check_empty_file(char *str);
void				ft_check_little_square(char *str, char **tab, t_char y_one);
int					ft_check_number_of_line(char *str);
int					test(char **argv, int arg);
void				error_errno(char **argv, int x);
int					ft_choose_fd(int argc, int arg, char **argv);
void				test_free(char **tab);

#endif
