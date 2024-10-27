/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchavez <mchavez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:43:01 by mchavez           #+#    #+#             */
/*   Updated: 2024/10/27 15:43:06 by mchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int board[4][4];
int visibility[16]; // Almacena los valores de visibilidad
int used_in_row[4][5], used_in_col[4][5]; // Marca alturas usadas en filas y columnas

// Función para escribir un carácter
void ft_putchar(char c) {
    write(1, &c, 1);
}

// Función para escribir una cadena de caracteres
void ft_putstr(char *str) {
    while (*str)
        write(1, str++, 1);
}

// Conversión de número a carácter para imprimir el tablero
void ft_putnbr(int n) {
    ft_putchar(n + '0');
}

// Función para imprimir el tablero
void print_board() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            ft_putnbr(board[i][j]);
            if (j < 3)
                ft_putchar(' ');
        }
        ft_putchar('\n');
    }
}

// Función para verificar visibilidad desde la izquierda y derecha de cada fila
int check_row(int row, int left, int right) {
    int max_height = 0, visible_left = 0, visible_right = 0;

    // Verificar desde la izquierda
    for (int j = 0; j < 4; j++) {
        if (board[row][j] > max_height) {
            max_height = board[row][j];
            visible_left++;
        }
    }

    // Verificar desde la derecha
    max_height = 0;
    for (int j = 3; j >= 0; j--) {
        if (board[row][j] > max_height) {
            max_height = board[row][j];
            visible_right++;
        }
    }

    return visible_left == left && visible_right == right;
}

// Función para verificar visibilidad desde arriba y abajo de cada columna
int check_col(int col, int up, int down) {
    int max_height = 0, visible_up = 0, visible_down = 0;

    // Verificar desde arriba
    for (int i = 0; i < 4; i++) {
        if (board[i][col] > max_height) {
            max_height = board[i][col];
            visible_up++;
        }
    }

    // Verificar desde abajo
    max_height = 0;
    for (int i = 3; i >= 0; i--) {
        if (board[i][col] > max_height) {
            max_height = board[i][col];
            visible_down++;
        }
    }

    return visible_up == up && visible_down == down;
}

// Verificar si una posición es válida
int is_valid(int row, int col, int height) {
    if (used_in_row[row][height] || used_in_col[col][height])
        return 0; // Altura ya usada en la fila o columna

    board[row][col] = height;
    used_in_row[row][height] = 1;
    used_in_col[col][height] = 1;

    // Verificar visibilidad solo al final de cada fila y columna
    if (col == 3 && !check_row(row, visibility[8 + row], visibility[12 + row])) {
        used_in_row[row][height] = 0;
        used_in_col[col][height] = 0;
        board[row][col] = 0;
        return 0;
    }
    if (row == 3 && !check_col(col, visibility[col], visibility[4 + col])) {
        used_in_row[row][height] = 0;
        used_in_col[col][height] = 0;
        board[row][col] = 0;
        return 0;
    }

    return 1;
}

// Backtracking para resolver el tablero
int solve(int row, int col) {
    if (row == 4) // Solución completa
        return 1;

    int next_row = (col == 3) ? row + 1 : row;
    int next_col = (col == 3) ? 0 : col + 1;

    for (int height = 1; height <= 4; height++) {
        if (is_valid(row, col, height)) {
            if (solve(next_row, next_col))
                return 1;
            used_in_row[row][height] = 0;
            used_in_col[col][height] = 0;
            board[row][col] = 0;
        }
    }
    return 0;
}

// Parsear entrada y asignar valores de visibilidad
int parse_input(char *input) {
    for (int i = 0; i < 16; i++) {
        if (input[i * 2] < '1' || input[i * 2] > '4')
            return 0;
        visibility[i] = input[i * 2] - '0';
    }
    return 1;
}

// Programa principal
int main(int argc, char *argv[]) {
    if (argc != 2 || !parse_input(argv[1])) {
        ft_putstr("Error\n");
        return 1;
    }

    if (solve(0, 0))
        print_board();
    else
        ft_putstr("Error\n");

    return 0;
}

