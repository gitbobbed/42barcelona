/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:33:06 by dpereir2          #+#    #+#             */
/*   Updated: 2024/10/27 19:14:00 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

// Forward declaration of helper functions
int		try_number(int board[SIZE][SIZE], int row, int col, int num);
void	get_next_cell(int row, int col, int *next_row, int *next_col);

// Solves the board using backtracking
int	solve_board(int board[SIZE][SIZE], int row, int col)
{
	int	next_row;
	int	next_col;
	int	num;

	if (row == SIZE)
		return (1);
	get_next_cell(row, col, &next_row, &next_col);
	num = 1;
	while (num <= SIZE)
	{
		if (try_number(board, row, col, num))
		{
			if (solve_board(board, next_row, next_col))
				return (1);
			board[row][col] = 0;
		}
		num++;
	}
	return (0);
}

// Get the next cell's row and column
void	get_next_cell(int row, int col, int *next_row, int *next_col)
{
	if (col == SIZE - 1)
	{
		*next_row = row + 1;
		*next_col = 0;
	}
	else
	{
		*next_row = row;
		*next_col = col + 1;
	}
}

// Attempts to place a number on the board
int	try_number(int board[SIZE][SIZE], int row, int col, int num)
{
	if (is_valid_move(board, row, col, num))
	{
		board[row][col] = num;
		return (1);
	}
	return (0);
}
