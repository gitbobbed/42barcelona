/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <dpereir2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:58:34 by dpereir2          #+#    #+#             */
/*   Updated: 2024/10/27 18:59:55 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

// Check if placing a number is valid
int	is_valid_move(int board[SIZE][SIZE], int row, int col, int num)
{
	return (is_row_safe(board, row, num)
		&& is_col_safe(board, col, num)
		&& constraint_satisfied(board, row, col, num));
}

// Check if row is safe
int	is_row_safe(int board[SIZE][SIZE], int row, int num)
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

// Check if column is safe
int	is_col_safe(int board[SIZE][SIZE], int col, int num)
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
