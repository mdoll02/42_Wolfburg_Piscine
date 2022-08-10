/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 09:02:44 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/08 10:16:41 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_sz;
	unsigned int	j;
	unsigned int	src_sz;

	dest_sz = 0;
	j = 0;
	src_sz = 0;
	while (dest[dest_sz] != '\0')
		dest_sz++;
	while (src[src_sz] != '\0')
		src_sz++;
	if (dest_sz > size)
		return (size + src_sz);
	if (size == 0)
		return (src_sz);
	while (dest_sz < (size - 1) && src[j] != '\0')
	{
		dest[dest_sz] = src[j];
		dest_sz++;
		j++;
	}
	dest[dest_sz] = '\0';
	return ((dest_sz - j) + src_sz);
}

// #include <stdio.h>
// #include <string.h>
// #define N_CAT_SIZE 19
// int	main(void)
// {
// 	char a[] = "Append This :)";
// 	char b[] = "To This \0\0\0\0\0\0\0\0\0\0";
// 	char d[] = "To This \0\0\0\0\0\0\0\0\0\0";

// 	printf("a: \"%s\" b: \"%s\"\n", a, b);
// 	printf("%d\n", ft_strlcat(b, a, N_CAT_SIZE));
// 	printf("a: \"%s\" b: \"%s\"\n", a, b);
// 	printf("%lu\n", strlcat(d, a, N_CAT_SIZE));
// 	printf("a: \"%s\" b: \"%s\"\n", a, d);
// 	return (0);
// }