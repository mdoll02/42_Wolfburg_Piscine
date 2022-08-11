/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschmidt <kschmidt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:36:24 by kschmidt          #+#    #+#             */
/*   Updated: 2022/07/23 16:21:38 by kschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_horizontal(int x, int y, int cur_y)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (x <= 1 || i % (x - 1) == 0)
		{
			if (y <= 1 || cur_y % (y - 1) == 0)
				ft_putchar('o');
			else
				ft_putchar('|');
		}
		else
		{
			if (y <= 1 || cur_y % (y - 1) == 0)
				ft_putchar('-');
			else
				ft_putchar(' ');
		}
		i++;
	}
}

void	print_verticals(int x, int y)
{
	int	j;

	j = 0;
	while (j < y)
	{
		print_horizontal(x, y, j);
		ft_putchar('\n');
		j++;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	print_verticals(x, y);
}
