#include <stdio.h>
void ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	nbr;
	int	*p_1;
	int	**p_2;
	int	***p_3;
	int	****p_4;
	int	*****p_5;
	int	******p_6;
	int	*******p_7;
	int	********p_8;
	int	*********p_9;

	nbr = 32;
	p_1 = &nbr;
	p_2 = &p_1;
	p_3 = &p_2;
	p_4 = &p_3;
	p_5 = &p_4;
	p_6 = &p_5;
	p_7 = &p_6;
	p_8 = &p_7;
	p_9 = &p_8;
	ft_ultimate_ft(p_9);
	printf("%d", nbr);
	return (0);
}
