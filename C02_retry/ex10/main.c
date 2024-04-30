#include <stdio.h>
#include "ft_strlcpy.c"

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char	*source;
	char	destination[20];
	unsigned int	num;

	source = "Techie Delight";
	num = 9;

	num = ft_strlcpy(destination, source, num);
	printf("%s", destination);
	printf("\n");
	printf("size: %i", num);
}
