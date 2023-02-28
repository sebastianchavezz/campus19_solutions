/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:11:37 by schavez           #+#    #+#             */
/*   Updated: 2023/02/28 23:23:32 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

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
int main(void)
{
	char s1[100] = "sebastiam ";
	char s2[200] = "chavee bravca;inte";

	printf("%s\n", ft_strncat(s1,s2,4));
}
