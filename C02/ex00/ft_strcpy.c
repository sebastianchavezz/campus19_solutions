/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:07:25 by schavez           #+#    #+#             */
/*   Updated: 2023/03/06 18:07:20 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *destination, char *source)
{
	int	i;

	i = 0;
	while (*(source + i) != '\0')
	{
		*(destination + i) = *(source + i);
		i++;
	}
	*(destination + i + 1) = '\0';
	return (destination);
}
