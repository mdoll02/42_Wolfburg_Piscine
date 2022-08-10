/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 13:55:49 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/01 11:09:24 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*hexdec;
	int		i;

	i = 0;
	hexdec = "0123456789abcdef";
	addr = &hexdec;
	size = 42;
	return (addr);
}

// int	main(void)
// {
// 	char	*string;

// 	string = "Bonjour touss\t\n\tc \0 something something";
// 	ft_print_memory(string, 50);
// 	return (0);
// }
