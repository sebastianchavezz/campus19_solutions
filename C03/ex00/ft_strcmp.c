/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 22:12:33 by schavez           #+#    #+#             */
/*   Updated: 2023/02/28 22:25:53 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;
	
	i = 0;
	while (*(s1 +i) != '\0' || *(s2 + i) != '\0')
	{
		if (*(s1 + i) != *(s2 + i))
		{
			result = *(s1 +i) - * (s2 + i);
			return (result);	
		}
		i++;
	}
	return (0);
}

int main(void)
{
	char *f = "bfb";
	char *s = "gfg";
	
	printf("%d\n",ft_strcmp(f,s));
	
}
