#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		result;
	int		remainder;

	result = *a / *b;
	remainder = *a % *b;
	*a = result;
	*b = remainder;
}

int	main(void)
{
	int	n1;
	int	n2;
	int	*a;
	int	*b;

	n1 = 42;
	n2 = 5;
	a = &n1;
	b = &n2;
	ft_ultimate_div_mod(a, b);
	printf("Divisão: %d, Sobra: %d\n", *a, *b);
}
