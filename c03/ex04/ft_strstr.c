/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:33:40 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/08 09:49:46 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checklength(char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i] != 0)
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_checklength(to_find) == 0)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (to_find[j] != 0 && to_find[j] == str[i + j])
			{
				if (to_find[j + 1] == '\0')
					return (&str[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}

// #include "stdio.h"

// int	main(void)
// {
// 	char	*needle;
// 	char	*haystack;
// 	char	*output;

// 	needle = "ll";
// 	haystack = "";
// 	output = ft_strstr(haystack, needle);
// 	printf("%s\n", output);
// }
