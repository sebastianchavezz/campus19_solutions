/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:28:32 by schavez           #+#    #+#             */
/*   Updated: 2023/03/01 11:05:51 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void	ft_putnbr(int nb)
{
	int	mod;
	int	ex;	
	int	remain;
	char	c;	

	ex = 1;
	remain = nb;
	while (ex < nb)
	{
		ex *= 10;
	}	
	ex /= 10;
	write(1, "\"",1);	
	while (ex >= 1)
	{
		mod = remain;	
		mod /= ex;
		remain = remain % ex;
		c = '0' + mod;
		ex /= 10;
		write(1,&c,1);
	}
	write(1, "\"",1);	
}
int main(void)
{
	ft_putnbr(8042);
}
