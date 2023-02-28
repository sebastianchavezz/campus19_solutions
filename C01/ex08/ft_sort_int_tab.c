/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 20:02:27 by schavez           #+#    #+#             */
/*   Updated: 2023/02/28 21:01:21 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size -1)
	{
		j = i + 1;
		while (j < size)
		{
			if (*(tab + i) > *(tab + j))
			{
				temp = *(tab + j);
				*(tab + j) = *(tab + i);
				*(tab + i) = temp;
			}
			j++;
		}
		i++;
	}
}
