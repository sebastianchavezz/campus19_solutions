/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:31:25 by schavez           #+#    #+#             */
/*   Updated: 2023/03/02 16:45:55 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	if (nb >= 1 )
	{
		return nb * ft_iterative_factorial(nb - 1);
	}
	else
	{
		return 1;
	}
}
int	main(void)
{
	int res;
	res = ft_iterative_factorial(6);
	printf("%d\n",res);
	return 0;
}
