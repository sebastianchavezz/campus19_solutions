/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:12:29 by schavez           #+#    #+#             */
/*   Updated: 2023/03/02 17:15:30 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power <= 1 )
	{
		return nb;
	}
	return nb*ft_recursive_power(power-1);

}

int main(void)
{
	printf("%d\n",ft_recursive_power(2,10));
}
