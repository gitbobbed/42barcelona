/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <dpereir2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:02:59 by dpereir2          #+#    #+#             */
/*   Updated: 2024/10/29 15:07:07 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(
				(str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
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
	if (ft_str_is_alpha(argv[1]))
		result = 'y';
	else
		result = 'n';
	write(1, &result, 1);
	return (0);
}
*/
