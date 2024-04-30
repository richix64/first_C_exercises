/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:02:57 by rpocater          #+#    #+#             */
/*   Updated: 2022/12/14 17:00:27 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dst_size;
	unsigned int	src_size;
	unsigned int	result;

	dst_size = 0;
	while (dest[dst_size] != '\0')
		++dst_size;
	src_size = 0;
	while (src[src_size] != '\0')
		++src_size;
	result = src_size;
	if (size <= dst_size)
		result += size;
	else
		result += dst_size;
	src_size = 0;
	while (src[src_size] != '\0' && dst_size + 1 < size)
	{
		dest[dst_size] = src[src_size];
		dst_size++;
		src_size++;
	}
	dest[dst_size] = '\0';
	return (result);
}
