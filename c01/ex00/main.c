#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	nbr;
	int	*p_nbr;

	nbr = 53;
	p_nbr = &nbr;

	ft_ft(p_nbr);
	printf("%d\n",nbr);
	return (0);
}
