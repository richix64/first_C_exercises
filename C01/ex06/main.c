#include "ft_strlen.c"
#include <stdio.h>
int		ft_strlen(char *str);

int     main(void)
{
    //char hola[5];
    char *str;
	int a;
    char hola[ ] = {'h', 'o', 'l', 'a', '\0'};
    str = &hola[0];
    a = ft_strlen(str);
	printf("%i\n", a);
}
