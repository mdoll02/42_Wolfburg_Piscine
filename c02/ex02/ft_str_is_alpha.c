/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:27:10 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/01 10:51:38 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	alph;

	i = 0;
	alph = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
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
// 	char *string_test1 = "asjhdHA98DHUIHFWjqhhu";
// 	char *string_test2 = "";
// 	char *string_test3 = "Some thing";
// 	char *string_test4 = ";Something";
// 	char *string_test5 = "SomeGThing";

// 	char result;
// 	result = ft_str_is_alpha(string_test1) + '0';
// 	write(1, &result, 1);
// 	write(1, "  ", 2);
// 	result = ft_str_is_alpha(string_test2) + '0';
// 	write(1, &result, 1);
// 	write(1, "  ", 2);
// 	result = ft_str_is_alpha(string_test3) + '0';
// 	write(1, &result, 1);
// 	write(1, "  ", 2);
// 	result = ft_str_is_alpha(string_test4) + '0';
// 	write(1, &result, 1);	
// 	write(1, "  ", 2);
// 	result = ft_str_is_alpha(string_test5) + '0';
// 	write(1, &result, 1);	
// 	write(1, "  ", 2);
// }