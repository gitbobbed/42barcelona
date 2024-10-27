/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_row_col.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:51:07 by dpereir2          #+#    #+#             */
/*   Updated: 2024/10/27 17:53:38 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	is_unique_in_row(int board[SIZE][SIZE], int row, int num)
{
	int	col;

	col = 0;
	while (col < SIZE)
	{
		if (board[row][col] == num)
			return (0);
		col++;
	}
	return (1);
}

int	is_unique_in_col(int board[SIZE][SIZE], int col, int num)
{
	int	row;

	row = 0;
	while (row < SIZE)
	{
		if (board[row][col] == num)
			return (0);
		row++;
	}
	return (1);
}
