/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 11:31:53 by mdoll             #+#    #+#             */
/*   Updated: 2022/07/31 12:14:17 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_checktop(int nbrboxes[], int array[][]);

void	rush(int nbrboxes[16], int array[4][4])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (i++ < 4)
	{
		while (j++ < 4)
		{
			ft_putchar(array[i][j]);
			ft_putchar(' ');
		}
		j = 0;
		ft_putchar('\n');
	}
}

int	main(void)
{
	int	nbrboxes[] = {4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2};
	int	zeroarray[4][4];
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < 4)
	{
		while (x < 4)
		{
			zeroarray[y][x] = 48;
			x++;
		}
		x = 0;
		y++;
	}
	x = 0;
	y = 0;
	while (y < 4)
	{
		while (x < 4)
		{
			ft_putchar(zeroarray[y][x]);
			if (x == 3)
				ft_putchar('\n');
			else
				ft_putchar(' ');
			x++;
		}
		y++;
	}
	ft_checktop(nbrboxes[16], zeroarray[4][4]);
	return (0);
}
