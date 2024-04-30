#include <stdio.h>
#include "ft_str_is_alpha.c"

int	ft_str_is_alpha(char *str);

int		main(void)
{
	char* src = "copy";
	char* dest = "CO4PY";
	char* a = ""; 

	printf("%i\n", ft_str_is_alpha(src));
	printf("%i\n", ft_str_is_alpha(dest));
	printf("%i\n", ft_str_is_alpha(a));
}
