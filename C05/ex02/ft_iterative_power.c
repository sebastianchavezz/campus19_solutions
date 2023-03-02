/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:52:22 by schavez           #+#    #+#             */
/*   Updated: 2023/03/02 17:11:48 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;	
	int	exp;

	result = 1;
	exp = 1;
	while (exp <= power)
	{
		result *= nb;				
		exp++;
	}
	return (result);
}

int	main(void)
{	
	printf("%d\n",ft_iterative_power(4,3));

}
