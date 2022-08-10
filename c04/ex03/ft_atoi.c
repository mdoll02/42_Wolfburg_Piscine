/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:28:59 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/09 12:24:43 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	nbr;

	i = 0;
	nbr = 0;
	negative = 0;
	while ((str[i] < '0' || str[i] > '9') && str[i] != '\0')
	{
		if (str[i] == '-')
			negative++;
		else if ((str[i] > ' ' && str[i] <= '~') && str[i] != '+')
			return (0);
		i++;
	}
	negative = negative % 2;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		nbr = nbr * 10 + str[i] - 48;
		i++;
	}
	if (negative == 1)
		nbr = nbr * (-1);
	return (nbr);
}

// #include "stdio.h"
// #include "stdlib.h"

// int	main(void)
// {
// 	int		r;
// 	char	*str1;

// 	str1 = "       +++++++-----+5890472adada28";
// 	r = ft_atoi(str1);
// 	printf("%d\n", r);
// 	return (0);
// }
