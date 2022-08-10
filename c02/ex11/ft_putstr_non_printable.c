/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 10:39:29 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/02 14:28:27 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_puthexdec(char c, char d, char e)
{
	write(1, &e, 1);
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hexdec;
	int		i;
	int		temp;

	hexdec = "0123456789abcdef";
	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] < ' ' || str[i] == 127)
		{
			temp = str[i];
			if (str[i] < 15)
				ft_puthexdec(hexdec[0], hexdec[temp], '\\');
			else if (str[i] < 32)
			{
				temp = str[i];
				ft_puthexdec(hexdec[1], hexdec[temp - 16], '\\');
			}
			else
				ft_puthexdec(hexdec[7], hexdec[16], '\\');
		}
		else
			write(1, &str[i], 1);
	}
}

// int	main(void)
// {
// 	char	*string_test1 = "Co\rucou\ntu vas bi|?en ?";
// 	char *string_test2 = " ";
// 	char *string_test3 = "Th\es is not\n";
// 	char *string_test4 = "Nor\tthis \v";
// 	char *string_test5 = "NOT* J_u_s_t kidding, it is:)";

// 	ft_putstr_non_printable(string_test1);
// 	write(1, "\n", 1);
// 	ft_putstr_non_printable(string_test2);
// 	write(1, "\n", 1);
// 	ft_putstr_non_printable(string_test3);
// 	write(1, "\n", 1);
// 	ft_putstr_non_printable(string_test4);
// 	write(1, "\n", 1);
// 	ft_putstr_non_printable(string_test5);
// 	write(1, "\n", 1);
// }
