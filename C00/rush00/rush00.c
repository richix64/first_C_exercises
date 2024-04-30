/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:17:23 by yupeng            #+#    #+#             */
/*   Updated: 2022/11/26 10:17:23 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	fill_line(char c1, char mid_c, char c2, int fila)
{
	int	i;

	i = 0;
	while (i < fila)
	{
		if (i == 0)
			ft_putchar(c1);
		else if (i == fila -1)
			ft_putchar(c2);
		else
			ft_putchar(mid_c);
		i++;
	}
	ft_putchar('\n');
}

void	rush00(int x, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (i == 0 || i == y - 1)
			fill_line('o', '-', 'o', x);
		else
			fill_line('|', ' ', '|', x);
		i++;
	}
}
