/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:18:36 by rpocater          #+#    #+#             */
/*   Updated: 2022/12/09 13:03:31 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char str)
{
	if (str >= '0' && str <= '9')
	{	
		return (1);
	}
	if (str >= 'a' && str <= 'z')
	{
		return (2);
	}
	if (str >= 'A' && str <= 'Z')
	{
		return (3);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i] != '\0')
	{	
		if ((check(str[i]) == 2) && flag == 0)
			str[i] -= 32;
		if ((check(str[i]) == 3) && flag == 1)
			str[i] += 32;
		if ((check(str[i]) >= 1))
			flag = 1;
		if ((check(str[i]) == 0) && flag == 1)
			flag = 0;
		i++;
	}
	return (str);
}
