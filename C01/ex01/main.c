#include "ft_ultimate_ft.c"
#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main(void)
{
	int *********nbr;
	int a = 0;
	int *uno;
	int **dos;
	int ***tres;
	int ****cuatro;
	int *****cinco;
	int ******seis;
	int *******siete;
	int ********ocho;
	uno= &a;
	dos = &uno;
	tres = &dos;
	cuatro = &tres;
	cinco = &cuatro;
	seis = &cinco;
	siete = &seis;
	ocho = &siete;
	nbr = &ocho;

	ft_ultimate_ft(nbr);
	printf("%i\n", a);
}
