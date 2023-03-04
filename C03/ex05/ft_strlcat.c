/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 00:27:44 by schavez           #+#    #+#             */
/*   Updated: 2023/03/03 18:27:34 by schavez          ###   ########.fr       */
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

char	*l_strcat(char *dest, char *src, int nb)
{
	int	end;
	int	i;

	end = l_str(dest);
	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + end + i) = *(src + i);
		i++;
	}
	*(dest + end + i) = '\0';
	return (dest);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	dest_l;
	int	src_l;
	int	nb;	

	if (size <= dest_l)
	{
		return (size + src_l);
	}	
	nb = size - dest_l;
	l_strcat(dest, src, nb);
	return (dest_l + src_l);
}
