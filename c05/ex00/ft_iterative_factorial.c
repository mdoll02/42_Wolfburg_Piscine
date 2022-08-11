/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:21:08 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/10 10:20:31 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fak;

	fak = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		fak *= nb;
		nb--;
	}
	return (fak);
}

// #include "stdio.h"

// int	main(void)
// {
// 	int	i;

// 	i = 3;
// 	printf("%d\n", ft_iterative_factorial(i));
// 	return (0);
// }
