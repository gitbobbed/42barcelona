/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_safe.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assistant <assistant@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:15:00 by assistant         #+#    #+#             */
/*   Updated: 2024/10/27 10:15:00 by assistant        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

/* Verifica si el valor puede colocarse en la posición dada */
int	ft_is_safe(int board[SIZE][SIZE], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (board[row][i] == num)
			return (0);
		i++;
	}
	i = 0;
	while (i < SIZE)
	{
		if (board[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}
