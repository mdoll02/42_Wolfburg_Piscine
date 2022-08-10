/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:27:28 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/09 12:10:54 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	if (*str != '\0')
	{
		return (1 + ft_strlen(str + 1));
	}
	else
		return (0);
}

// #include "stdio.h"
// #include "string.h"

// int	main(int argc, char **argv)
// {
// 	int		len;
// 	int		alen;
// 	argc++;
// 	len = ft_strlen(argv[1]);
// 	alen = strlen(argv[1]);
// 	printf("The length should be %d the lenght is %d", len, alen);
// }
