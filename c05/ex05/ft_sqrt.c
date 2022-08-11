/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 10:43:41 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/11 13:25:45 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i != nb)
	{
		i++;
		if (nb / 2 <= i)
			return (0);
		if (i > 46340)
			return (0);
	}
	return (i);
}

// #include "stdio.h"

// int	main(void)
// {
// 	int	nb;
// 	int	res;

// 	nb = 57782;
// 	res = ft_sqrt(nb);
// 	printf("%d\n", res);
// 	return (0);
// }
