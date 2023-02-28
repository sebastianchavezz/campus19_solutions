/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:04:21 by schavez           #+#    #+#             */
/*   Updated: 2023/02/28 16:23:55 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	checker(char *i1, char *j1, char *i2, char *j2)
{
	if (*i1 <= *i2 && *j1 < *j2)
	{
		if (*i1 == '9' && *j1 == '8' && *i2 == '9' && *j2 == '9')
		{
			write(1, i1, 1);
			write(1, j1, 1);
			write(1, " ", 1);
			write(1, i2, 1);
			write(1, j2, 1);
			write(1, "\n", 1);
		}
		else
		{
			write(1, i1, 1);
			write(1, j1, 1);
			write(1, " ", 1);
			write(1, i2, 1);
			write(1, j2, 1);
			write(1, ", ", 2);
		}
	}
}

void	helper_function(char *i1, char *j1)
{
	char	i2;
	char	j2;

	i2 = '0';
	while (i2 <= '9')
	{
		j2 = '0';
		while (j2 <= '9')
		{
			checker(i1, j1, &i2, &j2);
			j2++;
		}
		i2++;
	}
}

void	ft_print_comb2(void)
{
	char	i1;
	char	j1;

	i1 = '0';
	while (i1 <= '9')
	{
		j1 = '0';
		while (j1 <= '9')
		{
			helper_function(&i1, &j1);
			j1++;
		}
		i1++;
	}
}
