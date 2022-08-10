/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:54:54 by mdoll             #+#    #+#             */
/*   Updated: 2022/07/28 09:50:18 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	temp = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

// int	main(void)
// {
// 	int	tab[] = {9,2,7,4,5,3,4,6,5,5,53,4,2,4,2,4,2,1,56,7,8,9, -12, 0};
// 	int	i=0;
// 	int	size = sizeof(tab)/sizeof(tab[0]);

// 	while (i < size)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	ft_rev_int_tab(tab, size);
// 	printf("\n");
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf ("%d ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// }
