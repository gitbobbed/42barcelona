/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_views.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:59:50 by dpereir2          #+#    #+#             */
/*   Updated: 2024/10/27 18:01:50 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

/* Cuenta las cajas visibles desde la izquierda en la fila */
int	count_visible_from_left(int board[SIZE][SIZE], int row)
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

/* Cuenta las cajas visibles desde la derecha en la fila */
int	count_visible_from_right(int board[SIZE][SIZE], int row)
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

/* Cuenta las cajas visibles desde arriba en la columna */
int	count_visible_from_top(int board[SIZE][SIZE], int col)
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

/* Cuenta las cajas visibles desde abajo en la columna */
int	count_visible_from_bottom(int board[SIZE][SIZE], int col)
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
