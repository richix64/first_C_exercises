/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:33:34 by rpocater          #+#    #+#             */
/*   Updated: 2022/11/25 12:06:24 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	letter;

	if (n >= 0)
	{
		letter = 'P';
	}
	else
	{
		letter = 'N';
	}
	write(1, &letter, 1);
}
