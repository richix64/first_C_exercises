/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:53:25 by rpocater          #+#    #+#             */
/*   Updated: 2022/11/28 15:18:50 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		impresion;

	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb == 0)
	{
		return ;
	}
	impresion = (nb % 10) + '0';
	nb /= 10;
	ft_putnbr(nb);
	write(1, &impresion, 1);
}
