/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:55:32 by schavez           #+#    #+#             */
/*   Updated: 2023/02/28 22:08:45 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	first(int a)
{
	char	c;

	c = '0' + a;
	return (c);
}

char	second(int b)
{
	char	d;

	if (b > 9)
	{
		b -= 10;
		d = 'a' + b;
		return (d);
	}
	d = '0' + b;
	return (d);
}

void	handle_writer(char c)
{
	float	mod;
	char	ch;
	int		b;

	b = c >> 4;
	mod = c % 16;
	ch = 92;
	write(1, &ch, 1);
	ch = first(b);
	write(1, &ch, 1);
	ch = second(mod);
	write(1, &ch, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c <= 31 || c == 127)
		{
			handle_writer(c);
		}
		else
		{
			write(1, &c, 1);
		}
		i++;
	}
	write(1, "\n", 1);
}
