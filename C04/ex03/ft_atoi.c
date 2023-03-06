/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:07:47 by schavez           #+#    #+#             */
/*   Updated: 2023/03/06 18:15:02 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_atoi(char *str)
{
	int		i;
	int		teken;
	long	result;

	result = 0;
	i = 0;
	teken = -1;
	while (*(str + i) <= ' ')
		i++;
	while (*(str + i) == '-' || *(str + i) == '+')
	{
		if (*(str + i) == '-')
		{
			teken = teken * -1;
		}
		i++;
	}
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		result = result * 10 + (*(str + i) - '0');
		i++;
	}
	result *= teken;
	return (result);
}	
