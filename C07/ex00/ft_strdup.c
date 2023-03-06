/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:33:21 by schavez           #+#    #+#             */
/*   Updated: 2023/03/06 16:31:19 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int	l_str(char *str)
{
	int	i;
	
	i = 0;
	while (*(str + i ) != '\0')
	{
		i++;
	}
	return (i);
}


char	*ft_strdup(char *src)
{
	int	len;
	char	*dest;	
	int	i;
	
	len = l_str(src);
	i = 0;
	dest = (char *)malloc(len * sizeof(char));
	if(!dest)
		return (0);
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char	*str;
	char	*allocated;

	str = "Hello World with malloc()";
	printf("original  : base  : $%s$ @ %p\n", str, str);
	allocated = strdup(str);
	printf("copied    : alloc : $%s$ @ %p\n", allocated, allocated);
	allocated = ft_strdup(str);
	printf("ft_copied : alloc : $%s$ @ %p\n", allocated, allocated);
}
