/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 22:26:58 by schavez           #+#    #+#             */
/*   Updated: 2023/02/28 22:40:12 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	result;

	i = 0;
	while (*(s1 + i) != '\0' && i < n )
	{
		if (*(s1 + i) != *(s2 + i))
		{
			result = *(s1 + i) - *(s2 + i);
			return (result);
		}
		i++;
	}
	return(0);
}

int main(void)
{
	char *f = "abcdea";
	char *s = "abcdeA";
	
	printf("%d\n",ft_strncmp(f,s,2));

}
