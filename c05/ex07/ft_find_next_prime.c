/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 12:19:43 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/11 10:08:11 by mdoll            ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (ft_is_prime(i) != 1)
		i++;
	return (i);
}

// #include "stdio.h"

// int	main(void)
// {
// 	int	nb;
// 	int	res;

// 	nb = 528;
// 	res = ft_find_next_prime(nb);
// 	printf("%d\n", res);
// }
