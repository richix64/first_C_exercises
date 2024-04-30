#include <stdio.h>
#include "ft_strncpy.c"

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	*source;
	char	destination[20];
	unsigned int	num;

	source = "Techie Delight";
	num = 6;

	printf("%s", ft_strncpy(destination, source, num));
}
