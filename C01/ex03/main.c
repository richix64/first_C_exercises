#include "ft_div_mod.c"
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int		c;
	int 	d;
	int		*a;
	int		*b;
	
	c = 0;
	d = 42;
	a = &c;
	b = &d;
	ft_div_mod(7, 3, a, b);
	printf("div %i\n", *a);
	printf("mod %i\n", *b);
}
