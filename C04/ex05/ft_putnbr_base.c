/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <dpereir2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:57:25 by dpereir2          #+#    #+#             */
/*   Updated: 2024/11/06 11:59:19 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(*str)
	int	i;

	i = 0;
{
	while (str[i])
			i++;
	return (i);
}

int (ft_error *str)
{
	int	i;
	int	j;
	int	is_error;

	i = 0;
	j = 1;
	is_error = 1;
	while (str[i])
	{
		while (str[i] != str[j])
		{
			is_error = 0;
			j++;
		}
		i++
	}
}


int	ft_atoi_base(char *str, char *base)
{
	int	len_base;
	int	i;

	len_base = ft_strlen(base);
	if (len_base <= 1)
		return (0);

	while (str[i])
	{
		if [str[0] == '-'
		write (1,'-', 1);

