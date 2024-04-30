#include <stdio.h>
#include "ft_str_is_numeric.c"

int	ft_str_is_alpha(char *str);

int		main(void)
{
	char* src = "4566copy";
	char* dest = "454876";
	char* a = ""; 

	printf("%i\n", ft_str_is_numeric(src));
	printf("%i\n", ft_str_is_numeric(dest));
	printf("%i\n", ft_str_is_numeric(a));
}
