#include "ft_ultimate_div_mod.c"
#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b);

int     main(void)
{
    int     c;
    int     d;
    int     *a;
    int     *b;

    c = 7;
    d = 3;
    a = &c;
    b = &d;
    ft_ultimate_div_mod(a, b);
    printf("div %i\n", *a);
    printf("mod %i\n", *b);
}
