/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpereir2 <dpereir2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:33:45 by dpereir2          #+#    #+#             */
/*   Updated: 2024/10/23 23:12:37 by dpereir2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp_tab[size];
	int	j;

	i = 0;
	j = size - 1;
	while (i < size)
	{
		temp_tab[i] = tab[j];
		i++;
		j--;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = temp_tab[i];
		i++;
	}
}
