/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <dpereir2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:09:51 by dpereir2          #+#    #+#             */
/*   Updated: 2024/10/23 18:19:42 by dpereir2         ###   ########.fr       */
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
	if (num >= 10)
	{
		write_int_recursiva(num / 10);
	}
	ft_putnbr(num % 10);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write_int_recursiva(i);
	return (i);
}
