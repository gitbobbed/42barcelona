/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <dpereir2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:30:11 by dpereir2          #+#    #+#             */
/*   Updated: 2024/10/26 22:02:55 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*Controla que cada char de entrada es espacio o de 1 a 4 */
int	ft_validate_char(char c)
{
	if ((c >= '1' && c <= '4') || c == ' ')
	{
		return (1);
		else
			return (0);
	}
}

int	ft_validate_input(char *input)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (input[i] != '\0')
	{
		if (!ft_is_valid_char(input[i]))
			return (0);
		if (input[i] >= '1' && input[i] <= '4')
			count++;
		i++;
	}
	if (count == 16)
	{
		return (1);
		else
			return (0);
	}
}

void	ft_putstr(char *str) 
{
	int	i;

	while (str[i] != '\0')
	{
		write(1, str[i], 1);
		i++
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (!ft_validate_input(argv[1]))
	{
		ft_putstr("Error\n");
		return (1);
	}
	ft_putstr("Input valid\n");
	return (0);
}

