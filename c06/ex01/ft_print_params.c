/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:06:59 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/09 09:22:47 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_pustr(char *str)
{
	if (*str)
	{
		write(1, str, 1);
		ft_pustr(str + 1);
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_pustr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
