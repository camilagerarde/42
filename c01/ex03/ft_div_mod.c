#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int		result;
	int		remainder;

	result = a / b;
	remainder = a % b;
	*div = result;
	*mod = remainder;
}

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 42;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("Divisão: %d, Sobra: %d\n", div, mod);
}
