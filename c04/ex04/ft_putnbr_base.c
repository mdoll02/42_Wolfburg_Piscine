/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 10:39:45 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/08 12:40:56 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printnbr(int nbr, char *base, int i)
{
	if (nbr != 0)
	{
		ft_printnbr(nbr / i, base, i);
	}
	ft_putchar(base[nbr % i]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	if (nbr < 0 && nbr != -2147483648)
	{
		nbr = nbr * (-1);
	}
	else if (nbr == -2147483648)
		write(1, "-2147483648", 11);
	ft_printnbr(nbr, base, i);
}

// int	main(void)
// {
// 	char	*base;
// 	int		i;

// 	base = "01";
// 	i = 378599;
// 	ft_putnbr_base(i, base);
// 	return (0);
// }
