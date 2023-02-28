/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:51:09 by schavez           #+#    #+#             */
/*   Updated: 2023/02/28 21:55:02 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int		src_len;
	char	*src_ptr;
	int		i;

	i = 0;
	src_len = 0;
	*src_ptr = scr;
	while (*src_ptr != '\0')
	{
		src_len++;
		src_ptr++;
	}
	while (i < size - 1 && *src != '\0')
	{
		*dest++ = *src++;
		i++;
	}
	if (i < size)
	{
		*dest = '\0';
	}
	return (src_len);
}
