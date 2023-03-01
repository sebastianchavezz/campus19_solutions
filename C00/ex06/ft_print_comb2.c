/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:19:14 by schavez           #+#    #+#             */
/*   Updated: 2023/03/01 17:23:03 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	write_c(char i1, char i2, char i3, char i4)
{
	if (i1 == '9' && i2 == '8' && i3 == '9' && i4 == '9')
	{
		write(1, &i1, 1);
		write(1, &i2, 1);
		write(1, " ", 1);
		write(1, &i3, 1);
		write(1, &i4, 1);
		write(1, "\n", 1);
	}
	else
	{
		write(1, &i1, 1);
		write(1, &i2, 1);
		write(1, " ", 1);
		write(1, &i3, 1);
		write(1, &i4, 1);
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	char	c;
	char	c1;
	int		i;
	int		j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{	
			c = '0' + (i / 10);
			c1 = '0' + (i % 10);
			write_c(c, c1, '0' + (j / 10), '0' + (j % 10));
			j++;
		}
		i++;
	}
}
