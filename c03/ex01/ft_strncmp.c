/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:14:59 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/08 12:32:49 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

// #include "unistd.h"
// #include "stdio.h"
// #include "string.h"

// int	main(void)
// {
// 	char *first = "wsed";
// 	char *second = "wseTTdfghj";
// 	int decision;

// 	decision = ft_strncmp(first, second, 6);
// 	printf("%d\n", decision);
// 	decision = strncmp(first, second, 6);
// 	printf("%d", decision);
// }
