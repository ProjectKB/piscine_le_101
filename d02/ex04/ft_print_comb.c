#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_char(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '1';
	c = '2';
	while (a != '9' + 1)
	{
		while (b != '9' + 1)
		{
			while (c != '9' + 1)
			{
				if (a != b && b != c && a < b && b < c)
					print_char(a, b, c);
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
	ft_print_comb();
	return (0);
}
