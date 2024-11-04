/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <dpereir2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:50:28 by dpereir2          #+#    #+#             */
/*   Updated: 2024/11/04 22:21:00 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;
	int	digit;
	int	found;

	i = 0;
	sign = 1;
	result = 0;
	digit = 0;
	found = 0;
	while (str[i] && found == 0)
	{
		if (str[i] == '-')
			sign = -sign;
		else if (str[i] >= '0' && str[i] <= '9')
		{
			digit = str[i] - '0';
			result = result * 10 + digit;
			found = 1;
		}
		found = 0;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>

int main() {
    char *test1 = "123";
    char *test2 = "-456";
    char *test3 = "0";
    char *test4 = "  789";
    char *test5 = "abcd123";  // Edge case: invalid characters before number

    printf("Test 1 (\"123\"): %d\n", ft_atoi(test1));     // Expected output: 123
    printf("Test 2 (\"-456\"): %d\n", ft_atoi(test2));    // Expected output: -456
    printf("Test 3 (\"0\"): %d\n", ft_atoi(test3));       // Expected output: 0
    printf("Test 4 (\"  789\"): %d\n", ft_atoi(test4));   // Expected output: 789
    printf("Test 5 (\"abcd123\"): %d\n", ft_atoi(test5)); // Expected output: undefined behavior or 0

    return 0;
}
*/
