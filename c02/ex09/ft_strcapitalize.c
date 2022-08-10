/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:51:35 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/01 11:00:09 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (i == 0 || (str[i - 1] < 48 || str[i - 1] > 122)
			|| (str[i - 1] > 57 && str[i - 1] < 65)
			|| (str[i - 1] > 90 && str[i - 1] < 97))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	}
	return (str);
}

// #include "unistd.h"
// int main(void)
// {
// 	char string_test1[] = "salut, com/ment tu vAs ? 42mots quarante-deux";
// 	int	i;

// 	i = 0;
// 	while (string_test1[i] != '\0')
// 	{
// 		i++;
// 	}
// 	write(1, ft_strcapitalize(string_test1), i);
// 	write(1, "\n", 1);
// }