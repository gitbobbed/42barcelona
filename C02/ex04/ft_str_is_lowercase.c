/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <dpereir2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:57:44 by dpereir2          #+#    #+#             */
/*   Updated: 2024/10/29 17:09:23 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 'z' || str[i] < 'a')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <unistd.h>

int	main(int argc, char **argv)
{
	char	result;

	if (argc != 2)
		return (1);
	if (ft_str_is_lowercase(argv[1]))
		result = 'y';
	else
		result = 'n';
	write (1, &result, 1);
}
*/
