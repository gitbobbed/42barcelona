/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <dpereir2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:48:54 by dpereir2          #+#    #+#             */
/*   Updated: 2024/11/04 22:17:01 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_writenbr(int nb)
{
	char	c;

	c = nb + '0';
	write (1, &c, 1);
}

void	ft_putnbr(int num)
{
	if (num == -2147483648)
	{
		write (1, "-2147483648", 12);
	}
	if (num < 0)
	{
		write (1, "-", 1);
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
	}
	if (num != -2147483648)
		ft_writenbr (num % 10);
}
/*
#include <stdio.h>

int main()
{
    printf("Testing ft_rec_write with 123:\n");
    ft_rec_write(123);  // Expected output: 123
    printf("\n");

    printf("Testing ft_rec_write with -456:\n");
    ft_rec_write(-456); // Expected output: -456
    printf("\n");

    printf("Testing ft_rec_write with 0:\n");
    ft_rec_write(0);    // Expected output: 0
    printf("\n");

    printf("Testing ft_rec_write with -2147483648:\n");
    ft_rec_write(-2147483648); // Expected output: -2147483648
    printf("\n");

    return 0;
}
*/
