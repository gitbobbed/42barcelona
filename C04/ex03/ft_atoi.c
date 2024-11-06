/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <dpereir2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:50:28 by dpereir2          #+#    #+#             */
/*   Updated: 2024/11/05 22:13:16 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;
	int	digit;

	i = 0;
	sign = 1;
	result = 0;
	digit = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		digit = str[i] - '0';
		result = result * 10 + digit;
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>

int main() {
    char *test1 = "123";
    char *test2 = "-456";
    char *test3 = "0";
    char *test4 = "+  789";
	char *test5 = "+00123";
	char *test6 = "      +12 34";
	char *test7 = "++123";
	char *test8 = "+-123";
    char *test9 = "abcd123";  // Edge case: invalid characters before number
	char *test10 = "+";

    printf("Test 1 (\"123\"): %d\n", ft_atoi(test1));     // Expected output: 123
    printf("Test 2 (\"-456\"): %d\n", ft_atoi(test2));    // Expected output: -456
    printf("Test 3 (\"0\"): %d\n", ft_atoi(test3));       // Expected output: 0
    printf("Test 4 (\"+  789\"): %d\n", ft_atoi(test4));    // Expected output: 6789
    printf("Test 5 (\"+000123\"): %d\n", ft_atoi(test5));    // Expected output: 123
    printf("Test 6 (\"     +12 34\"): %d\n", ft_atoi(test6));    // Expected output: 12
    printf("Test 7 (\"++123\"): %d\n", ft_atoi(test7));    // Expected output: 123
    printf("Test 8 (\"+-123\"): %d\n", ft_atoi(test8));    // Expected output: 1232
    printf("Test 9 (\"abcd123\"): %d\n", ft_atoi(test9)); // Expected output: undefined behavior or 0
    printf("Test 10 (\"+\"): %d\n", ft_atoi(test10));    // Expected output: 0

    return 0;
}
*/
