#include "ft_putstr.c"

void	ft_putstr(char *str);

int		main(void)
{
	//char hola[5];
	char *str;

	char hola[ ] = {'h', 'o', 'l', 'a', '\0'};
	str = &hola[0];
	ft_putstr(str);

}
