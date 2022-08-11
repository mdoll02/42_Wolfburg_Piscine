/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:10:39 by kschmidt          #+#    #+#             */
/*   Updated: 2022/07/23 17:27:41 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_corner(int x, int y, int cur_y, int cur_x)
{
	if (x <= 1 || cur_x % (x - 1) == 0)
	{	
		if (cur_x == 0 && cur_y == 0)
			ft_putchar('A');
		else if (cur_x == x - 1 && cur_y == 0)
			ft_putchar('C');
		else if (cur_x == 0 && cur_y == y - 1)
			ft_putchar('C');
		else if (cur_x == x - 1 && cur_y == y - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else
	{
		if (y <= 1 || cur_y % (y - 1) == 0)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	print_horizontal(int x, int y, int cur_y)
{
	int	i;

	i = 0;
	while (i < x)
	{
		print_corner(x, y, cur_y, i);
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
