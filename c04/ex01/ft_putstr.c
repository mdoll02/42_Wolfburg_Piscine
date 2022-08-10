/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:05:27 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/09 12:11:55 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putstr(char *str)
{
	if (*str == '\0')
		return ;
	else
	{
		write(1, str, 1);
		ft_putstr(str + 1);
	}
}

// #include "string.h"

// int	main(void)
// {
// 	char	*str;

// 	str = "ertztcuvgbihnojm87t63wo8gzvv";
// 	ft_putstr(str);
// 	return (0);
// }
