/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:17:35 by schavez           #+#    #+#             */
/*   Updated: 2023/03/02 16:05:26 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int	l_base(char *str)
{
	int	i;
	
	i = 0;
	while(*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

void	writer(int i, char *base)
{
	char	c;
	
	c = *(base + i);
	write(1,&c,1);	
}
// moet nog execeptions doen!
int	check_invalid(int nbr, char *base, int len)
{
	if (len  < 2)
	
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;
	char	c;	

	len = l_base(base);
	if (nbr < 0)
	{
		nbr = nbr * -1;
	}
	if (nbr >= len)
	{
		ft_putnbr_base(nbr / len, base);
		nbr = nbr % len;
	}
	writer(nbr, base);
	
}
int		main(void)
{
	ft_putnbr_base(162, "01");
	printf("\n");
	ft_putnbr_base(40, "poneyvif");
	printf("\n");
	//ft_putnbr_base(894867, "0123456789");
	ft_putnbr_base(526, "0123456789abcdef");
}

