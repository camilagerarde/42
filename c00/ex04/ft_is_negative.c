#include <unistd.h>

void	ft_is_negative(int n)
{	
	char	result;

	if (n >= 0)
	{
		result = 'P';
	}
	else if (n < 0)
	{
		result = 'N';
	}
	write(1, &result, 1);
}

int	main(void)
{
	int	number;

	number = 10;
	ft_is_negative(number);
}
