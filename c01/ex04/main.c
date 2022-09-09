#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int a;
	int b;

	a = 32;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d\nb = %d", a, b);
}