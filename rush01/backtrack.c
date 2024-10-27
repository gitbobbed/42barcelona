/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:33:06 by dpereir2          #+#    #+#             */
/*   Updated: 2024/10/27 18:34:15 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

// Forward declaration of helper functions
int try_number(int board[SIZE][SIZE], int row, int col, int num);

// Solves the board using backtracking
int solve_board(int board[SIZE][SIZE], int row, int col)
{
    int next_row;
    int next_col;

    if (row == SIZE)
    {
        return (1);
    }
    if (col == SIZE - 1)
    {
        next_row = row + 1;
        next_col = 0;
    }
    else
    {
        next_row = row;
        next_col = col + 1;
    }
    for (int num = 1; num <= SIZE; num++)
    {
        if (try_number(board, row, col, num))
        {
            if (solve_board(board, next_row, next_col))
                return (1);
            board[row][col] = 0; // Backtrack
        }
    }
    return (0);
}

// Attempts to place a number on the board
int try_number(int board[SIZE][SIZE], int row, int col, int num)
{
    if (is_valid_move(board, row, col, num))
    {
        board[row][col] = num;
        return (1);
    }
    return (0);
}
