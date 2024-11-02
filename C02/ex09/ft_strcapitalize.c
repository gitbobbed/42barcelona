/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <dpereir2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:01:20 by dpereir2          #+#    #+#             */
/*   Updated: 2024/10/29 22:56:32 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_non_letter(char c)
{
	return (!(is_lower(c) || is_upper(c) || (c >= '0' && c <= '9')));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (is_non_letter(str[i]))
			new_word = 1;
		else if (new_word && is_lower(str[i]))
		{
			str[i] = str[i] - 32;
			new_word = 0;
		}
		else if (!new_word && is_upper(str[i]))
			str[i] = str[i] + 32;
		else
			new_word = 0;
		i++;
	}
	return (str);
}
