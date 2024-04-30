/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:31:57 by rpocater          #+#    #+#             */
/*   Updated: 2022/11/29 13:11:01 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_array(char *v, int size, int last)
{
	int		i;

	i = 0;
	if (v[0] == last)
	{
		while (i < size)
			ft_putchar(v[i++]);
		return ;
	}
	while (i < size)
		ft_putchar(v[i++]);
	write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	char	v[10];
	char	v_max[10];
	int		flag;
	int		base;
	int		i;

	i = 0;
	while (i < n)
	{
		v[i] = i + '0';
		v_max[i] = (10 - n) + i + '0';
		i++;
	}
	print_array(v, n, v_max[0]);
	while (v[0] != v_max[0])
	{
		flag = n - 1;
		while (v[flag] == v_max[flag])
			--flag;
		base = ++(v[flag]);
		while (flag < n)
			v[++flag] = ++base;
		print_array(v, n, v_max[0]);
	}
}
