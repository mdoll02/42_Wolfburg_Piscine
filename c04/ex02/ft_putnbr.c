/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:40:20 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/09 12:12:39 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0 && nb != -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	else if (nb == 0)
		ft_putchar('0');
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar(48 + nb % 10);
	}
}

// int	main(void)
// {
// 	int	nb;

// 	nb = -563456778;
// 	ft_putnbr(nb);
// 	return (0);
// }
