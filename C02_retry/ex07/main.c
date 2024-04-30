#include <stdio.h>
#include "ft_strupcase.c"

//char	*ft_strupcase(char *str);

int	main(void)
{
	char str[] = "agSslkfj6skd#e8*";
	
	printf("Original: %s", str);
	printf("final : %s", ft_strupcase(str));
	
	/*ft_strupcase(str);
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}*/
}
