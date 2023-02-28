/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:30:26 by schavez           #+#    #+#             */
/*   Updated: 2023/02/28 20:01:47 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	j = size -1;
	i = 0;
	while (j > i)
	{
		temp = *(tab + j);
		*(tab + j) = *(tab + i);
		*(tab + i) = temp;
		i++;
		j--;
	}
}