/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:34:54 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/08 09:45:33 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	dest_sz;
	int	j;

	dest_sz = 0;
	j = 0;
	while (dest[dest_sz] != '\0')
		dest_sz++;
	while (src[j] != '\0')
	{
		dest[dest_sz] = src[j];
		j++;
		dest_sz++;
	}
	dest[dest_sz] = '\0';
	return (dest);
}

// #include "stdio.h"
// #include "string.h"
// #include "unistd.h"

// int main(void)
// {
// 	char src[] = "_World";
// 	char dest[] = "Hello";
// 	int	i;
// 	int	j;

// 	i = strlen(src);
// 	j = strlen(dest);
// 	printf("The total length should be %d\n", i+j);
// 	write(1, ft_strcat(dest, src), i+j);
// 	write(1,"\n",1);
// 	j = 0;
// 	while (dest[j] != '\0') j++;
// 	printf("The total length is %d\n", j);
// 	printf("%s\n", dest);
// }
