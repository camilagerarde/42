#include <unistd.h>

void	ft_print_result(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write (1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (! (a == '9' && b == '8' && c == '9' && d == '9' ))
	{
		write(1, ", ", 2);
	}
}

void	ft_make_comb(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					ft_print_result(a, b, c, d);
					d++;
				}
				c++;
				d = '0';
			}
			b++;
			c = a;
			d = b + 1;
		}
		a++;
		b = '0';
		c = a;
		d = b + 1;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	ft_make_comb(a, b, c, d);
}

int	main(void)
{
	ft_print_comb2();
}
