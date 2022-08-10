/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:22:48 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/01 10:55:53 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	alph;

	i = 0;
	alph = 1;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
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
// 	char	*string_test1 = "This is totally printable\\*#$%@^&***||//";
// 	char *string_test2 = "";
// 	char *string_test3 = "This is not\n";
// 	char *string_test4 = "Nor\tthis";
// 	char *string_test5 = "NOT* J_u_s_t kidding, it is:)";

// 	char result;
// 	result = ft_str_is_printable(string_test1) + '0';
// 	write(1, &result, 1);
// 	write(1, "  ", 2);
// 	result = ft_str_is_printable(string_test2) + '0';
// 	write(1, &result, 1);
// 	write(1, "  ", 2);
// 	result = ft_str_is_printable(string_test3) + '0';
// 	write(1, &result, 1);
// 	write(1, "  ", 2);
// 	result = ft_str_is_printable(string_test4) + '0';
// 	write(1, &result, 1);	
// 	write(1, "  ", 2);
// 	result = ft_str_is_printable(string_test5) + '0';
// 	write(1, &result, 1);	
// 	write(1, "  ", 2);
// }
