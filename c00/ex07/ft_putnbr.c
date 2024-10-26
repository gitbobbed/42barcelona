/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <dpereir2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 14:27:08 by dpereir2          #+#    #+#             */
/*   Updated: 2024/10/19 14:32:09 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	c = nb + '0';
	write(1, &c, 1);
}

void	write_int_recursiva(int num)
{
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num >= 10)
	{
		write_int_recursiva(num / 10);
	}
	ft_putnbr(num % 10);
}

int	main(void)
{
	int	num;

	num = -787878;
	write_int_recursiva(num);
	return (0);
}
