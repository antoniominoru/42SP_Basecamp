#include <stdio.h>
#include <stdlib.h>

int    ft_atoi(char *str);

int    main(void)
{
    int    a;
    int    b;

    a = ft_atoi("01010101011010101");
    printf("%d\n", a);
    b = ft_atoi("2147483647");
    printf("%d\n", b);
    b = ft_atoi("---+--2147483648dsfg");
    printf("%d\n", b);
    b = ft_atoi("---+--2147483648dsfg");
    printf("%d\n", b);
    b = ft_atoi("---+-ffatihirosihfcggh");
    printf("%d\n", b);
}    
