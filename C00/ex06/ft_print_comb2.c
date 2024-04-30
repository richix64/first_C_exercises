/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:48:48 by rpocater          #+#    #+#             */
/*   Updated: 2022/11/28 10:55:40 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int x)
{
	char	buffer[];

	buffer[] = {'0' + (x / 10) % 10, '0' + x % 10};
	write(1, buffer, 2);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			print_number(i);
			write(1, " ", 1);
			print_number(j);
			if (!(i == 98 && j == 99))
			{
				write(1, ", ", 2);
			}
			j++;
		}
		if (j == 99)
		{
			j = 0;
		}
		i++;
	}	
}
