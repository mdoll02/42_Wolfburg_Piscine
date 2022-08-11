/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:19:41 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/10 10:14:10 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include "stdio.h"

// int	main(void)
// {
// 	int	i;
// 	int	rev;

// 	i = 20;
// 	rev = ft_fibonacci(i);
// 	printf("%d\n", rev);
// 	return (0);
// }
