#include <stdio.h>
#include "ft_strcapitalize.c"

//char	*ft_strcapitalize(char *str);

int main(void)
{
	char	str[] = "salut, COMMENT tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("original: %s", str);
	printf("final: %s", ft_strcapitalize(str));
}
