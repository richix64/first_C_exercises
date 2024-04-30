#include "ft_rev_int_tab.c"
#include <stdio.h>

void	 ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int xd[7] = {42, 234, 345, 12, 786, 5, 45};
	int i = 0;
	while (i < 7)
	{
		printf("%i, ", xd[i]);
		i++;
	}
	int *a = &xd[0];
	ft_rev_int_tab(a, 7);
	i = 0;
	while (i < 7)
	{
		printf("%i, ", xd[i]);
		i++;
	}
}
