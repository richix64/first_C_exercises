#include <unistd.h>
void ft_print_number(int nb);

void ft_print_number(int nb)
{
	int cos;
	int resto;
	int impresion;

	cos = nb;
	if ( cos < 0)
	{
		cos *= -1;
		write(1, "-", 1);
	}
	if( cos == 0)
	{
		return ;
	}
	resto = cos % 10;
	impresion = resto + '0';
	cos /= 10;
	ft_print_number(cos);
	write(1, &impresion,1);
}

int main(void)
{
	ft_print_number(-2567);
}
