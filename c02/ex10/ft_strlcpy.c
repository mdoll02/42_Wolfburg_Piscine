/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:13:27 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/02 14:29:13 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (j < 1)
		return (j);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

// #include "unistd.h"
// #include "stdio.h"

// int main(void)
// {
// 	char string_test1[] = "This is ";
// 	unsigned int	i;
// 	unsigned int size;

// 	i = 0;
// 	while (string_test1[i] != '\0')
// 	{
// 		i++;
// 	}
// 	size = 10;
// 	if (size > i)
// 		size = i + 1;
// 	char dest[size];
// 	ft_strlcpy(dest, string_test1, size);
// 	printf("Size is %d\n", i);
// 	write(1, dest, size);
// 	write(1, "\n", 1);
// 	printf("Size of copied string is %d\n", size);
// }
