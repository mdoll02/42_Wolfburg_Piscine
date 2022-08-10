/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:34:30 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/01 10:56:46 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

// #include "unistd.h"
// int main(void)
// {
// 	char string_test1[] = "SomEThing to uppercase:) zzz aaa /(§!";
// 	int	i;

// 	i = 0;
// 	while (string_test1[i] != '\0')
// 	{
// 		i++;
// 	}
// 	write(1, ft_strupcase(string_test1), i);
// 	write(1, "\n", 1);
// }