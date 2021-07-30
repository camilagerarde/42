#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	a;
	int	b;

	a = 2;
	b = 4;
	ft_swap(&a, &b);
	printf("A = %d, B = %d\n", a, b);
}
