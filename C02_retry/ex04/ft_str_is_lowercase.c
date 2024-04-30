/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:54:37 by rpocater          #+#    #+#             */
/*   Updated: 2022/12/07 12:30:01 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	if (*str == '\0')
	{
		i = 1;
	}
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			i = 1;
		}
		else
		{
			return (0);
		}
		str++;
	}
	return (i);
}
