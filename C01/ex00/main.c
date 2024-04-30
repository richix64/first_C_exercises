#include "ft_ft.c"
#include <stdio.h>
void	ft_ft(int *nbr);

int	main(void)
{
	int		*nbr; 
	int a = 0;
	nbr = &a;
	ft_ft(nbr);
	printf("%i\n", a);
}
