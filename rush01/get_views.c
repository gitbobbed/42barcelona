/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_views.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <dpereir2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:30:00 by dpereir2          #+#    #+#             */
/*   Updated: 2024/10/27 21:27:18 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	get_left_view(int board[SIZE][SIZE], int row)
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
	return (visible_count);
}

int	get_right_view(int board[SIZE][SIZE], int row)
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
	return (visible_count);
}

int	get_up_view(int board[SIZE][SIZE], int col)
{
	int	row;
	int	max_height;
	int	visible_count;

	row = 0;
	max_height = 0;
	visible_count = 0;
	while (row < SIZE)
	{
		if (board[row][col] > max_height)
		{
			max_height = board[row][col];
			visible_count++;
		}
		row++;
	}
	return (visible_count);
}

int	get_down_view(int board[SIZE][SIZE], int col)
{
	int	row;
	int	max_height;
	int	visible_count;

	row = SIZE - 1;
	max_height = 0;
	visible_count = 0;
	while (row >= 0)
	{
		if (board[row][col] > max_height)
		{
			max_height = board[row][col];
			visible_count++;
		}
		row--;
	}
	return (visible_count);
}
