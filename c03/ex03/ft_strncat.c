/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:53:00 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/08 09:47:30 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				dest_sz;
	unsigned int	j;

	dest_sz = 0;
	j = 0;
	while (dest[dest_sz] != '\0')
		dest_sz++;
	while (src[j] != '\0' && j < nb)
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
// 	unsigned int nb;
// 	i = strlen(src);
// 	j = strlen(dest);	
// 	nb = 4;
// 	printf("%s\n", ft_strncat(dest, src, nb));
// 	j = 0;
// 	j = strlen(dest);
// 	printf("The total length is %d\n", j);
// }
