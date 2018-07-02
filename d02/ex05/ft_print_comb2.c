#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_char(char a, char b, char c, char d)
{
	if ((c >= a && d >= b + 1) || c > a)
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
			ft_putchar(',');
			ft_putchar(' ');
		}
}

void ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	while (a != '9' + 1)
	{
		while (b != '9' + 1)
		{
			while (c != '9' + 1)
			{
				while (d != '9' + 1)
				{
					print_char(a, b, c, d);
					d++;
				}
				d = '0';
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}

int main()
{
	ft_print_comb2();
	return (0);
}
