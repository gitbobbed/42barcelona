/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:00:00 by dpereir2          #+#    #+#             */
/*   Updated: 2024/10/27 18:32:35 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

// Define the board size
# define SIZE 4 // This can be modified to handle different board sizes

// Function declarations for backtracking
int	solve_board(int board[SIZE][SIZE], int row, int col);
int	try_number(int board[SIZE][SIZE], int row, int col, int num);

// Function declarations for validation
int	is_valid_move(int board[SIZE][SIZE], int row, int col, int num);
int	is_row_safe(int board[SIZE][SIZE], int row, int num);
int	is_col_safe(int board[SIZE][SIZE], int col, int num);

// Function declarations for constraints
int	constraint_satisfied(int board[SIZE][SIZE], int row, int col, int num);
int	check_row_views(int board[SIZE][SIZE], int row);
int	check_left_view(int board[SIZE][SIZE], int row);
int	check_right_view(int board[SIZE][SIZE], int row);

// Helper functions for getting expected views
int	get_left_view(int row);
int	get_right_view(int row);

#endif
