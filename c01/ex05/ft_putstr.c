/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:46:48 by mdoll             #+#    #+#             */
/*   Updated: 2022/07/28 09:45:56 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putstr(char *str)
{
	if (*str != '\0')
	{
		write(1, str, 1);
		ft_putstr(str + 1);
	}
}

// int	main(void)
// {
// 	ft_putstr("Hello, how are you?");
// }