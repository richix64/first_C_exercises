#include "ft_swap.c"
#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int 	c;
	int		d;
	int		*a;
	int		*b;
	
	c = 0;
	d = 42;
	a = &c;
	b = &d;
	printf("%i %i\n", *a, *b);
	ft_swap(a, b);
	printf("%i %i\n", *a, *b);
}
