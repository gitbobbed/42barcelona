/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraints.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <dpereir2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:57:20 by dpereir2          #+#    #+#             */
/*   Updated: 2024/10/27 19:16:02 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	check_col_views(int board[SIZE][SIZE], int col)
{
	if (check_up_view(board, col) && check_down_view(board, col))
		return (1);
	return (0);
}

// Check if all visibility constraints are satisfied
int	constraint_satisfied(int board[SIZE][SIZE], int row, int col, int num)
{
	int	result;

	board[row][col] = num;
	if (check_row_views(board, row) && check_col_views(board, col))
		result = 1;
	else
		result = 0;
	board[row][col] = 0;
	return (result);
}

// Check views for a specific row
int	check_row_views(int board[SIZE][SIZE], int row)
{
	if (check_left_view(board, row) && check_right_view(board, row))
		return (1);
	return (0);
}

// Check the left-side view for a row
int	check_left_view(int board[SIZE][SIZE], int row)
{
	int	col;
	int	max_height;
	int	visible_count;

	col = 0;
	max_height = 0;
	visible_count = 0;
	while (col < SIZE)
	{
		if (board[row][col] > max_height)
		{
			max_height = board[row][col];
			visible_count++;
		}
		col++;
	}
	if (visible_count == get_left_view(row))
		return (1);
	return (0);
}

// Check the right-side view for a row
int	check_right_view(int board[SIZE][SIZE], int row)
{
	int	col;
	int	max_height;
	int	visible_count;

	col = SIZE - 1;
	max_height = 0;
	visible_count = 0;
	while (col >= 0)
	{
		if (board[row][col] > max_height)
		{
			max_height = board[row][col];
			visible_count++;
		}
		col--;
	}
	if (visible_count == get_right_view(row))
		return (1);
	return (0);
}
