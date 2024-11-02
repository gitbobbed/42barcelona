/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 08:39:42 by dpereir2          #+#    #+#             */
/*   Updated: 2024/10/25 09:32:05 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char		src[] = "Hello World";
	char		dest[20];
	unsigned int	i;
	unsigned int	n;

	n = 20;
	i = 0;
	ft_strncpy (dest, src, n);
	while (i < n)
	{
		if (dest[i] == '\0')
			printf("\\0");
		else
			printf("%c", dest[i]);
		i++;
	}
	return (0);
}
*/
