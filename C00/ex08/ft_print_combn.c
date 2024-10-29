/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <dpereir2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:46:33 by dpereir2          #+#    #+#             */
/*   Updated: 2024/10/21 22:55:07 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb_recursive(int n, int digito, char *result, int index)
{
	if (index == n)
	{
		write(1, result, n);
		if (result[0] != '9' - n + 1)
			write(1, ", ", 2);
	}
	while (digito <= '9')
	{
		result[index] = digito;
		ft_print_comb_recursive(n, digito + 1, result, index + 1);
		digito++;
	}
}

void	ft_print_combn(int n)
{
	char	result[10];

	if (n > 0 && n < 10)
		ft_print_comb_recursive(n, '0', result, 0);
}
