/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:20:03 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/01 10:54:58 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	alph;

	i = 0;
	alph = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			alph = 0;
			break ;
		}
		i++;
	}
	return (alph);
}

// #include "unistd.h"
// int main(void)
// {
// 	char *string_test1 = "SomeTZingOrOtherOneWayOrNOtxxxx";
// 	char *string_test2 = "";
// 	char *string_test3 = "ABCDEFZXXAOI";
// 	char *string_test4 = " ADD";
// 	char *string_test5 = "NOT* ";

// 	char result;
// 	result = ft_str_is_uppercase(string_test1) + '0';
// 	write(1, &result, 1);
// 	write(1, "  ", 2);
// 	result = ft_str_is_uppercase(string_test2) + '0';
// 	write(1, &result, 1);
// 	write(1, "  ", 2);
// 	result = ft_str_is_uppercase(string_test3) + '0';
// 	write(1, &result, 1);
// 	write(1, "  ", 2);
// 	result = ft_str_is_uppercase(string_test4) + '0';
// 	write(1, &result, 1);	
// 	write(1, "  ", 2);
// 	result = ft_str_is_uppercase(string_test5) + '0';
// 	write(1, &result, 1);	
// 	write(1, "  ", 2);
// }
