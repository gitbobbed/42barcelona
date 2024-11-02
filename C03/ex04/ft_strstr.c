/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <dpereir2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:39:23 by dpereir2          #+#    #+#             */
/*   Updated: 2024/11/02 17:29:46 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int first_char;
	int	found;

	i = 0;
	j = 0;
	found = 1;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[j] = str[i] && found = 1)
		{
			if (to_find[j] = str[i])
			{
				i++;
				j++;
			}
			if (to_find[j + 1]) == '\0')
				return (str [i-j]);
			if str[i +1] != to_find[i + 1]
				found = 0;
		}
		i++;
	}
}