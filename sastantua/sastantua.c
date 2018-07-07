/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   test.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 17:17:19 by loiberti     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 17:54:50 by loiberti    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

typedef struct sast
{
	int	g_i_count;
	int	g_j_count;
	int	g_height_handle;
	int	g_count_floor;
	int	g_l;
	int g_h;
}	sastoune;

int		ft_width_size(int i)
{
	if (!i)
		return (7);
	return (ft_width_size(i - 1) + 2 * (1 + (3 + i) + (i % 2 + i / 2)));
}

void	ft_print_pyramid(int w_door, int count, sastoune *sas, int size)
{
	int	s_door;
	int	stock;

	stock = w_door;
	s_door = sas->g_l / 2 + (3 + size / 2);
	while (sas->g_j_count < sas->g_l)
	{
		if (sas->g_i_count >= sas->g_height_handle && sas->g_j_count +
		count >= s_door && w_door != 0 && sas->g_count_floor == size - 1)
		{
			if (sas->g_i_count == (sas->g_h - sas->g_height_handle) / 2 +
			sas->g_height_handle && sas->g_j_count == (sas->g_l / 2 +
			sas->g_h - sas->g_i_count) + (stock / 2 - 1) && size > 4)
				ft_putchar('$');
			else
				ft_putchar('|');
			w_door--;
		}
		else
			ft_putchar('*');
		sas->g_j_count++;
	}
	ft_putchar('\\');
	sas->g_i_count++;
}

void	ft_print_space_and_pyramid(int e, int size, sastoune *sas)
{
	int	w_door;
	int	count;
	int	stock;

	sas->g_i_count = 0;
	count = 0;
	w_door = size;
	if (size % 2 == 0)
		w_door = size - 1;
	stock = w_door;
	while (sas->g_i_count < sas->g_h)
	{
		sas->g_j_count = -e;
		while (sas->g_j_count < sas->g_h - 1 - sas->g_i_count)
		{
			ft_putchar(' ');
			sas->g_j_count++;
		}
		sas->g_j_count += sas->g_h + 1 - sas->g_i_count;
		ft_putchar('/');
		ft_print_pyramid(w_door, count, sas, size);
		count++;
		w_door = stock;
		ft_putchar('\n');
	}
}

void	sastantua(int size)
{
	int	i;
	int	e;
	sastoune sas;
	
	if (size % 2)
		sas.g_height_handle = 2;
	else
		sas.g_height_handle = 3;
	i = 0;
	sas.g_count_floor = 0;
	while (i < size)
	{
		e = (ft_width_size(size - 1) - ft_width_size(i)) / 2;
		sas.g_h = 3 + i;
		sas.g_l = ft_width_size(i);
		ft_print_space_and_pyramid(e, size, &sas);
		i++;
		sas.g_count_floor++;
	}
}
