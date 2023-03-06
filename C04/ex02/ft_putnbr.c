/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:28:32 by schavez           #+#    #+#             */
/*   Updated: 2023/03/06 18:12:38 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		mod;
	int		ex;	
	int		remain;
	char	c;	

	ex = 1;
	remain = nb;
	while (ex < nb)
	{
		ex *= 10;
	}	
	ex /= 10;
	while (ex >= 1)
	{
		mod = remain;
		mod /= ex;
		remain = remain % ex;
		c = '0' + mod;
		ex /= 10;
		write(1, &c, 1);
	}
}
