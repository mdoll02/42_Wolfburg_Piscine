/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:20:08 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/01 15:28:02 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include "stdio.h"

// int main(void)
// {
// 	char *src = "Something to copy:)";
// 	int	i;

// 	i = 0;
// 	while (src[i] != '\0')
// 	{
// 		i++;
// 	}
// 	char dest[i];
// 	ft_strcpy(dest, src);
// 	printf("%s\n", dest);
// 	printf("%s", src);
// }
