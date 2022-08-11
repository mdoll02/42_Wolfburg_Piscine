/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:51:11 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/11 11:47:56 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0)
		return (1);
	while (power-- > 1)
	{
		nb *= i;
	}
	return (nb);
}

// #include "stdio.h"

// int	main(void)
// {
// 	int	i;

// 	i = 76;
// 	printf("%d\n", ft_iterative_power(i, 4));
// 	return (0);
// }
