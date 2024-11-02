/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <dpereir2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:26:38 by dpereir2          #+#    #+#             */
/*   Updated: 2024/10/29 15:00:19 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	int		j;
	char	a[1000];
	char	b[1000];

	j = 0;
	while (j < 12)
	{
		a[j] = "Hello World"[j];
		j++;
	}
	a[j] = '\0';
	ft_strcpy(b, a);
	j = 0;
	while (b[j] != '\0')
	{
		write(1, &b[j], 1);
		j++;
	}
	return (0);
}
*/
