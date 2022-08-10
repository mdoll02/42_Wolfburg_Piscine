/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:41:50 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/02 14:28:44 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include "stdio.h"
// #include "unistd.h"

// int main(void)
// {
// 	char *src = "Some";
// 	int	i;
// 	int n;
// 	int count_nulls;

// 	i = 0;
// 	while (src[i] != '\0')
// 	{
// 		i++;
// 	}
// 	n = 8;
// 	char dest[n];
// 	write(1,dest, n);
// 	write(1,"\n",1);
// 	ft_strncpy(dest,src,n);
// 	write(1,dest, n);
// 	write(1,"\n",1);
// 	printf("Size of source array: %d\n", i);
// 	printf("Size of destination array: %d\n", n);

// 	i = 0;
// 	count_nulls = 0;
// 	while (i < n)
// 	{
// 		if (dest[i] == '\0')
// 		count_nulls++;
// 		i++;
// 	}
// 	printf("Number of zeros in destination array: %d\n", count_nulls);	
// }
