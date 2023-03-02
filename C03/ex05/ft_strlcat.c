/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 00:27:44 by schavez           #+#    #+#             */
/*   Updated: 2023/03/01 10:11:09 by schavez          ###   ########.fr       */
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

char	*strcat(char *dest, char *scr, int nb)
{
	int	end;
	int	i;
	
	end = l_str(dest);
	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + end +i) = *(src + i);
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

	if (size <= dest_len)
	{
		return size + src_l;
	}	
	
	nb = size - dest_l;
	strcat(dest, src, nb);
	
	return (dest_l + src_l);
}
int main() {
    char str1[20] = "Hello, ";
    char str2[] = "world!";
    size_t dest_size = sizeof(str1);

    // Concatenate str2 onto str1, making sure not to overrun the buffer
    size_t result = strlcat(str1, str2, dest_size);

    printf("Result: %zu\n", result);
    printf("str1: %s\n", str1);

    return 0;
}
