/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <dpereir2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:23:32 by dpereir2          #+#    #+#             */
/*   Updated: 2024/10/29 16:57:01 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(int argc, char **argv)
{
	char	result;

	if (argc != 2)
		return (1);
	if(ft_str_is_numeric(argv[1]))
		result = 'y';
	else
		result = 'n';
	write (1, &result, 1);
}
*/
