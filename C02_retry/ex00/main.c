#include <stdio.h>
#include "ft_strcpy.c"
char	*ft_str_cpy(char *dest, char *src);

int		main(void)
{
	char src[] = "copy this";
	char dest[100];

	char *dest_ptr = ft_strcpy(dest, src);

	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("dest_ptr: %s\n", dest_ptr);

	printf("dest: %p\n", dest);
	printf("dest_ptr: %p\n", dest_ptr);
}
