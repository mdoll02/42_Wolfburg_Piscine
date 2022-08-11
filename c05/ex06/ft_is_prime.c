/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 12:09:52 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/11 10:09:15 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 5;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb < 0)
		return (0);
	if ((nb % 2 == 0 && nb != 2) || (nb % 3 == 0 && nb != 3))
		return (0);
	while (i < nb)
	{
		if (nb % i == 0 && i != nb)
			return (0);
		i += 2;
	}
	return (1);
}

// #include "stdio.h"

// int	main(void)
// {
// 	int	nb;
// 	int	res;

// 	nb = 144;
// 	res = ft_is_prime(nb);
// 	printf("%d\n", res);
// 	nb = 1619;
// 	res = ft_is_prime(nb);
// 	printf("%d\n", res);
// 	nb = 24;
// 	res = ft_is_prime(nb);
// 	printf("%d\n", res);
// 	nb = 142434;
// 	res = ft_is_prime(nb);
// 	printf("%d\n", res);
// 	nb = 14342;
// 	res = ft_is_prime(nb);
// 	printf("%d\n", res);
// 	nb = 5;
// 	res = ft_is_prime(nb);
// 	printf("%d\n", res);
// 	nb = 3;
// 	res = ft_is_prime(nb);
// 	printf("%d\n", res);
// 	nb = 2;
// 	res = ft_is_prime(nb);
// 	printf("%d\n", res);
// }
