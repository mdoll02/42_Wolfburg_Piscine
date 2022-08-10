/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:43:20 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/01 10:58:40 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

// #include "unistd.h"
// int main(void)
// {
// 	char string_test1[] = "SomEThing to LOWERCase:) ZZ A A &";
// 	int	i;

// 	i = 0;
// 	while (string_test1[i] != '\0')
// 	{
// 		i++;
// 	}
// 	write(1, ft_strlowcase(string_test1), i);
// 	write(1, "\n", 1);
// }
