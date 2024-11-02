/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <dpereir2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:38:11 by dpereir2          #+#    #+#             */
/*   Updated: 2024/10/29 18:04:28 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
			return (0);
		i++;
	}
	return (1);
}

/*
#include <unistd.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);

	char	result;
	if (ft_str_is_printable(argv[1]))
		result = 'y';
	else
		result = 'n';
	write (1, &result, 1);
}
*/
