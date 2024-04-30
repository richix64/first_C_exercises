/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:04:07 by rpocater          #+#    #+#             */
/*   Updated: 2022/11/26 14:28:11 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writeline(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	h;
	char	t;
	char	u;

	h = '0';
	while (h <= '7')
	{
		t = h + 1;
		while (t <= '8')
		{
			u = t + 1;
			while (u <= '9')
			{
				writeline(h, t, u);
				if (!(h == '7' && t == '8' && u == '9'))
				{
					write(1, ", ", 2);
				}
				u++;
			}
			t++;
		}
		h++;
	}
}
