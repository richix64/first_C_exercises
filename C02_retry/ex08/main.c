#include <stdio.h>
#include "ft_strlowcase.c"

int main(void)
{
	char str[] = "HLEL45LEO";

	printf("original: %s", str);
	printf("final: %s", ft_strlowcase(str));
}
