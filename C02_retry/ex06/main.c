#include <stdio.h>
#include "ft_str_is_printable.c"

int	ft_str_is_printable(char *str);

int		main(void)
{
	char src[] = {'a','\v','b', '\0'};
	char* dest = "454876";
	char* a = ""; 

	printf("%i\n", ft_str_is_printable(src));
	printf("%i\n", ft_str_is_printable(dest));
	printf("%i\n", ft_str_is_printable(a));
}
