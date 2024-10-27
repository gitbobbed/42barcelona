int	check_all_constraints(int board[SIZE][SIZE], int *up, int *down, int *left, int *right, int row, int col)
{
	if (!check_left_constraint(board, left, row))
		return (0);
	if (!check_right_constraint(board, right, row))
		return (0);
	if (!check_up_constraint(board, up, col))
		return (0);
	if (!check_down_constraint(board, down, col))
		return (0);
	return (1);
}

int	solve_board(int board[SIZE][SIZE], int *up, int *down, int *left, int *right, int row, int col)
{
	int	num;

	if (row == SIZE)
		return (1); // El tablero completo está resuelto
	if (col == SIZE)
		return (solve_board(board, up, down, left, right, row + 1, 0)); // Pasar a la siguiente fila

	num = 1;
	while (num <= SIZE)
	{
		if (is_unique_in_row(board, row, num) && is_unique_in_col(board, col, num))
		{
			board[row][col] = num;
			if (check_all_constraints(board, up, down, left, right, row, col))
			{
				if (solve_board(board, up, down, left, right, row, col + 1))
					return (1);
			}
			board[row][col] = 0; // Retroceso
		}
		num++;
	}
	return (0); // No se encontró solución
}
