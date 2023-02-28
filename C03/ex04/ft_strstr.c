/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:25:48 by schavez           #+#    #+#             */
/*   Updated: 2023/03/01 00:27:02 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*(str + i) != '\0')
	{
	
		if (*(str + i) == *(to_find + j))
		{
			j++;
		}
		if (*(to_find + j) == '\0')
		{
			return (to_find);
		}
		i++;
	}
	return (NULL);
}

int main()
{
	char s1[100] = "Fun with STL";
	 char s2[100] = "STL";
   	 char* p;

	p = ft_strstr(s1,s2);
	printf("%s\n",p);
}
