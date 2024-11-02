/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 23:42:22 by dpereir2          #+#    #+#             */
/*   Updated: 2024/10/30 10:18:40 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
1. Calculates length of source string first
2. Covers for size == 0 edge case
3. Then copies src to dest
4. Null-terminates dest
5. Returns (src_len) if not returned  before
*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	while (i < size - 1 && src [i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

/*
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str)
        ft_putchar(*str++);
}

void ft_putnbr(int n)
{
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if (n >= 10)
        ft_putnbr(n / 10);
    ft_putchar(n % 10 + '0');
}

int main(void)
{
    char src[] = "Hello, World!";
    char dest[20];
    unsigned int result;

    ft_putstr("Source: ");
    ft_putstr(src);
    ft_putchar('\n');

    result = ft_strlcpy(dest, src, sizeof(dest));

    ft_putstr("Destination: ");
    ft_putstr(dest);
    ft_putchar('\n');

    ft_putstr("Returned length: ");
    ft_putnbr(result);
    ft_putchar('\n');

    ft_putstr("Actual length of src: ");
    ft_putnbr(sizeof(src) - 1);
    ft_putchar('\n');

    return (0);
}
*/
