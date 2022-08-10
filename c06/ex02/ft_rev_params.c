/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 09:24:41 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/09 09:25:38 by mdoll            ###   ########.fr       */
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

	i = argc - 1;
	while (i > 0)
	{
		ft_pustr(argv[i]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
