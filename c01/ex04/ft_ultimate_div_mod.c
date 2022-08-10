/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:15:04 by mdoll             #+#    #+#             */
/*   Updated: 2022/07/28 09:42:59 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}

// #include "stdio.h"

// void	ft_ultimate_div_mod(int *a, int *b);

// int main(void)
// {
// 	int a,b;
// 	a = 9;
// 	b =2;
// 	ft_ultimate_div_mod(&a,&b);
// 	printf("a div b = %d, a mod b = %d\n",a,b);
// 	a = 10;
// 	b =3;
// 	ft_ultimate_div_mod(&a,&b);
// 	printf("a div b = %d, a mod b = %d\n",a,b);
// }
