#include <unistd.h>
int g_i_count;
int g_j_count;
int g_height_handle;
int g_count_floor;
int g_l;

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_width_size(int i)
{
	if (!i)
		return (7);
	return (ft_width_size(i - 1) + 2 * (1 + (3 + i) + (i % 2 + i / 2)));
}

void ft_print_pyramid(int w_door, int count, int h, int size)
{
	int s_door;
	int stock;

	stock = w_door;
	s_door = g_l / 2 + (3 + size / 2); // s_door indique quand j print the door,
	while (g_j_count < g_l)
	{
		if (g_i_count >= g_height_handle && g_j_count + count >= s_door && // height_handle indique début porte selon i
		w_door != 0 && g_count_floor == size - 1) // size -1 = dernier étage | sans count, la porte se décale d'un
		{
			if (g_i_count == (h - g_height_handle) / 2 + // g_i_count = milieu hauteur porte
			g_height_handle && g_j_count == (g_l / 2 + h - g_i_count) + // g_j_count == position poignée
			(stock / 2 - 1) && size > 4) // stock est utilisé pour conservé valeur initiale de w_door
				ft_putchar('$');
			else
				ft_putchar('|');
			w_door--;
		}
		else
			ft_putchar('*');
		g_j_count++;
	}
	ft_putchar('\\');
}

void ft_print_space_and_pyramid(int h, int e, int size)
{
	int w_door;
	int count;
	int stock;

	g_i_count = 0;
	count = 0;
	w_door = size;
	if(size % 2 == 0)
		w_door = size - 1;
	stock = w_door;
	while (g_i_count < h)
	{
		g_j_count = -e;
		while (g_j_count < h - 1 - g_i_count) // h - 1 - i calcul le nombre d'espace
		{
			ft_putchar(' ');
			g_j_count++;
		}
		g_j_count += h + 1 - g_i_count; // +1 pour réduire de 2 l'affichage du '*'
		ft_putchar('/');
		ft_print_pyramid(w_door, count, h, size);
		g_i_count++;
		count++;
		w_door = stock;
		ft_putchar('\n');
	}
}

void sastantua(int size)
{
	int i;
	int h;
	int e;

	if (size % 2)
		g_height_handle = 2;
	else 
		g_height_handle = 3;
	i = 0;
	g_count_floor = 0;
	while(i < size)
	{
		e = (ft_width_size(size - 1) - ft_width_size(i)) / 2; // calcule le nombre d'espace à laisser
		h = 3 + i;
		g_l = ft_width_size(i);
		ft_print_space_and_pyramid(h, e, size);
		i++;
		g_count_floor++;
	}
}

int main()
{
	sastantua(0);
	sastantua(1);
	sastantua(2);
	sastantua(3);
	sastantua(4);
	sastantua(5);
	sastantua(6);
	sastantua(7);
	return (0);
}
