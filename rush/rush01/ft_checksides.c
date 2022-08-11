/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checksides.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:27:37 by mdoll             #+#    #+#             */
/*   Updated: 2022/08/01 10:42:34 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int nbrboxes[16], int array[4][4]);

void	ft_checktop(int nbrboxes[], int array[][])
{
	int	i;

	while (i++ < 4)
	{
		if (nbrboxes[i] == 4)
		{
			array[0][i] = 49;
			array[1][i] = 50;
			array[2][i] = 51;
			array[3][i] = 52;
		}
		else if (nbrboxes[i] == 2 && nbrboxes[i + 8] == 3)
			array[1][i] = 51;
		else
			ft_checkbottom(nbrboxes[16], array[4][4], i);
	}
}

void	ft_checkbottom(int nbrboxes[16], int array[4][4], int i)
{
	while (i++ < 8)
	{
		if (nbrboxes[i] == 4)
		{
			array[3][i - 4] = 49;
			array[2][i - 4] = 50;
			array[1][i - 4] = 51;
			array[0][i - 4] = 52;
		}
		else if (nbrboxes[i] == 2 && nbrboxes[i + 8] == 3)
			array[2][i] = 51;
		else
			ft_checkright(nbrboxes[16], array[4][4], i);
	}
}

void	ft_checkright(int nbrboxes[16], int array[4][4], int i)
{
	while (i++ < 12)
	{
		if (nbrboxes[i] == 4)
		{
			array[i - 8][3] = 49;
			array[i - 8][2] = 50;
			array[i - 8][1] = 51;
			array[i - 8][0] = 52;
		}
		else if (nbrboxes[i] == 2 && nbrboxes[i + 8] == 3)
			array[i - 8][2] = 51;
		else
			ft_checkleft(nbrboxes[16], array[4][4], i);
	}
}

void	ft_checkleft(int nbrboxes[16], int array[4][4], int i)
{
	while (i++ < 15)
	{
		if (nbrboxes[i] == 4)
		{
			array[i - 12][0] = 49;
			array[i - 12][1] = 50;
			array[i - 12][2] = 51;
			array[i - 12][3] = 52;
		}
		else if (nbrboxes[i] == 2 && nbrboxes[i + 8] == 3)
			array[i - 12][1] = 51;
	}
	rush(nbrboxes[16], array[4][4]);
}
