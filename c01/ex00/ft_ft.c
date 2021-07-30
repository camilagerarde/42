#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	n;
	int	*nbr;

	n = 0;
	nbr = &n;
	ft_ft(nbr);
	printf("Valor atribuído - %d\n", *nbr);
	printf("Espaço na memória - %p\n", nbr);
}
