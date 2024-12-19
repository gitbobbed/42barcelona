/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <dpereir2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:57:25 by dpereir2          #+#    #+#             */
/*   Updated: 2024/11/07 22:11:56 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = 0;
		while (base[j])
		{
			if (i != j && base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base_recursive(int nbr, char *base, int len_base)
{
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
				ft_putnbr_base_recursive(-(nbr / len_base), base, len_base);
		write(1, &base[-(nbr % len_base)], 1);
	}
	else
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -nbr;
		}
		if (nbr >= len_base)
			ft_putnbr_base_recursive(nbr / len_base, base, len_base);
		write(1, &base[nbr % len_base], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len_base;

	len_base = ft_strlen(base);
	if (ft_is_valid(base))
		ft_putnbr_base_recursive(nbr, base, len_base);
}
/*
int main()
{
	write(1, "Expected: 42, Got: ", 19);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n", 1);

	write(1, "Expected: -42, Got: ", 20);
	ft_putnbr_base(-42, "0123456789");
	write(1, "\n", 1);

	write(1, "Expected: 11111111, Got: ", 25);
	ft_putnbr_base(255, "01");
	write(1, "\n", 1);

	write(1, "Expected: FF, Got: ", 19);
	ft_putnbr_base(255, "0123456789ABCDEF");
	write(1, "\n", 1);

	write(1, "Expected: ugu, Got: ", 20);
	ft_putnbr_base(100, "poniguay");
	write(1, "\n", 1);

	write(1, "Expected: (nothing), Got: ", 26);
	ft_putnbr_base(42, "");
	write(1, "\n", 1);

	write(1, "Expected: (nothing), Got: ", 26);
	ft_putnbr_base(42, "1");
	write(1, "\n", 1);

	ft_putnbr_base(876, "0123456789ABCDEF");
	write (1, "\n", 1);

	return (0);
}
*/
