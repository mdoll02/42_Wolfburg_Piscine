/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:13:26 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/08 12:28:30 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include "stdio.h"
// #include "string.h"

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;

// 	str1 = "\0aaaaaaaa";
// 	str2 = "aaa\0aaa";
// 	printf("%d\n", ft_strcmp(str1, str2));
// 	printf("%d\n", strcmp(str1, str2));
// }
