#include <stdio.h>
#include "ft_putstr_non_printable.c"
void	ft_putstr_non_printable(char *str);

int main(void)
{
	char *source = "Techie Delight\n";

	ft_putstr_non_printable(source);
}
