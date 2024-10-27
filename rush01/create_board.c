/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_board.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:21:35 by dpereir2          #+#    #+#             */
/*   Updated: 2024/10/27 09:58:40 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush01.h"

/* Inicializa el tablero con ceros */
void	initialize_board(int board[SIZE][SIZE])
{
	int	i;
	int	j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
}

/* Carga los valores de cada vista en un array de vistas */
void	load_view_section(char *input, int *view, int *index)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		view[i] = input[*index] - '0';
		i++;
		*index += 2;
	}
}

/* Carga todas las vistas desde el input, up down left y right */
void	load_views(char *input, int views[4][SIZE])
{
	int	index;

	index = 0;
	load_view_section(input, views[0], &index);
	load_view_section(input, views[1], &index);
	load_view_section(input, views[2], &index);
	load_view_section(input, views[3], &index);
}

/* Imprime el tablero para depuración */
void	print_board(int board[SIZE][SIZE])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			c = board[i][j] + '0';
			write(1, &c, 1);
			if (j < SIZE - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
