#include <stdio.h>
void	ft_swap(int *a, int *b);

int	main(void)
{
	int n1;
	int	n2;

	n1 = 33;
	n2 = 44;
	printf("n1 = %d \nn2 = %d\n", n1, n2);
	ft_swap(&n1, &n2);
	printf("---------\n");
	printf("n1 = %d \nn2 = %d\n", n1, n2);
}