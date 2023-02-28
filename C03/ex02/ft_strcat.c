/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 22:41:04 by schavez           #+#    #+#             */
/*   Updated: 2023/02/28 23:13:57 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	l_str(char *strng)
{
	int	result;
	
	result = 0;
	while (*(strng + result) != '\0')
	{
		result++;
	}
	return (result);
}


char	*ft_strcat(char *dest, char *scr)
{
	int	end;
	int	i;
	
	end = l_str(dest);
	i = 0;
	while (*(scr + i) != '\0')
	{
		*(dest + end  + i) = *(scr + i);
		i++;
	}
	*(dest + end + i) = '\0';
	return(dest);
}
int main(void)
{
	char s1[100] = "Sebastian ";
	char s2[100] = "Chavez Bracamonte ";
	char s3[100];
	
	printf("%s\n",ft_strcat(s1,s2));

}

