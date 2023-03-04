/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:11:37 by schavez           #+#    #+#             */
/*   Updated: 2023/03/03 18:24:41 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	l_str(char *strng)
{
	int	res;

	res = 0;
	while (*(strng + res) != '\0')
	{
		res++;
	}
	return (res);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	end;
	int	i;

	end = l_str(dest);
	i = 0;
	while (i < nb && *(src + i) != '\0')
	{
		*(dest + end + i) = *(src + i);
		i++;
	}
	*(dest + end + i) = '\0';
	return (dest);
}
