/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_words_tables.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 18:27:42 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/05 18:52:17 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		while (tab[i][j])
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
