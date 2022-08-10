/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:57:21 by mdoll             #+#    #+#             */
/*   Updated: 2022/07/28 09:41:01 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (a != 0 && b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

// #include "stdio.h"

// int main(void)
// {
// 	int div, mod;
// 	ft_div_mod(47,2,&div,&mod);
// 	printf("div = %d \n mod = %d\n", div, mod);
// 	ft_div_mod(232,4,&div,&mod);
//     printf("div = %d \n mod = %d\n", div, mod);
// 	ft_div_mod(10,3,&div,&mod);
// 	printf("div = %d \n mod = %d\n", div, mod);
// }  