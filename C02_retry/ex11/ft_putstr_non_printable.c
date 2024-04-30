/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:31:20 by rpocater          #+#    #+#             */
/*   Updated: 2022/12/14 23:14:50 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	translate_to_hexadecimal(char chr)
{
	char	temp;

	if (chr >= 0 && chr <= 9)
	{
		temp = chr;
		write(1, &temp, 1);
	}
	else if (chr >= 10 && chr <= 15)
	{
		temp = chr - 10 + 'a';
		write(1, &temp, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			write(1, "\\", 1);
			if (str[i] <= 0)
			{
				str[i] += 256;
			}
			translate_to_hexadecimal(str[i] / 16);
			translate_to_hexadecimal(str[i] % 16);
		}
		else
		{
			write(1, (str + i), 1);
		}
		i++;
	}
}
