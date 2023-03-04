/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 22:41:04 by schavez           #+#    #+#             */
/*   Updated: 2023/03/03 18:22:32 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
		*(dest + end + i) = *(scr + i);
		i++;
	}
	*(dest + end + i) = '\0';
	return (dest);
}
