/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:17:35 by schavez           #+#    #+#             */
/*   Updated: 2023/03/06 18:49:40 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	l_base(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

void	writer(int i, char *base)
{
	char	c;

	c = *(base + i);
	write(1, &c, 1);
}

int	same_char(char *base)
{
	int	i;
	int	j;

	i = 1;
	while (*(base + i) != '\0')
	{
		j = 0;
		while (j < i)
		{
			if (*(base + i) == *(base + j) || *(base + j) == '-')
				return (0);
			j++;
		}	
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	char	c;	

	len = l_base(base);
	if (len < 2 || same_char(base) == 0)
		return ;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		write(1, "-", 1);
	}
	if (nbr >= len)
	{
		ft_putnbr_base(nbr / len, base);
		nbr = nbr % len;
	}
	writer(nbr, base);
}
