/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:54:18 by mdoll             #+#    #+#             */
/*   Updated: 2022/07/28 09:38:21 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	sw;

	sw = *a;
	*a = *b;
	*b = sw;
}

// #include"stdio.h"
// void	ft_swap(int *a, int *b);

// int main(void)
// {
// 	int a,b;
// 	a=12;
// 	b=-5;
// 	printf("a is %d ",a);
// 	printf("b is %d\n",b);
// 	ft_swap(&a, &b);
// 	printf("a is %d ",a);
// 	printf("b is %d\n",b);
// 	return (0);
// }
