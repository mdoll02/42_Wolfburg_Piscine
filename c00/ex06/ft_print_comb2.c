/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:02:05 by mdoll             #+#    #+#             */
/*   Updated: 2022/07/25 12:24:11 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"unistd.h"

void	put_digits(int a, int b, int c, int d);
void	ft_createcomb(int a, int b, int c, int d);

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 48;
	b = 48;
	c = 48;
	d = 49;
	ft_createcomb(a, b, c, d);
}

void	put_digits(int a, int b, int c, int d)
{
	int	x;
	int	y;

	y = a * 10 + b;
	x = c * 10 + d;
	if (x > y)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &" ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		if (a == 57 && b == 56 && c == 57 && d == 57)
		{
		}
		else
			write(1, &", ", 2);
	}
}

void	ft_createcomb(int a, int b, int c, int d)
{
	while (a < 58)
	{
		while (b < 58)
		{
			while (c < 58)
			{
				while (d < 58)
				{
					put_digits(a, b, c, d);
					d++;
				}
				c++;
				d = 48;
			}
			b++;
			c = 48;
		}
		a++;
		b = 48;
	}
}
