/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 22:56:37 by schavez           #+#    #+#             */
/*   Updated: 2023/03/02 23:05:47 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{

	int i;
	
	i = 2;
	while (i < nb / 2)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}



int	ft_find_next_prime(int nb)
{
	
	while (1)
	{
		if (ft_is_prime(nb) == 1)
		{
			return (nb);
		} 
		nb++;
	}
	
}
int main (void)
{
	printf("%d\n", ft_find_next_prime(200));
	return 0;
}
