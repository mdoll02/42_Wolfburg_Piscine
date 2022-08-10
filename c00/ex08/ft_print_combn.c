/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 10:16:57 by mdoll             #+#    #+#             */
/*   Updated: 2022/07/26 12:08:59 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"unistd.h"

void	put_digits(int a, int b, int c);
void	ft_createcomb(int a, int b, int c);

void	ft_print_combn(int n)
{
	int	a;
	int	b;
	int	c;

	if (n > 0 && n <= 10)
	{
		if (n == 3)
		{
			a = 48;
			b = 49;
			c = 50;
			ft_createcomb(a, b, c);
		}
	}
}

void	put_digits(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_createcomb(int a, int b, int c)
{
	while (a < 56)
	{
		while (b < 57)
		{
			while (c < 58)
			{
				if (a < b && b < c)
				{
					put_digits(a, b, c);
					if (a == 55 && b == 56 && c == 57)
					{
					}
					else
						write(1, &", ", 2);
				}
				c++;
			}
			b++;
			c = 3;
		}
		a++;
		b = 3;
	}
}
