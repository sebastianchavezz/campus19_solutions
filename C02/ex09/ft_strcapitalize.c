/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:40:59 by schavez           #+#    #+#             */
/*   Updated: 2023/03/06 14:52:15 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_is_lower(char *chl)
{
	if (*chl >= 97 && *chl <= 122)
	{
		*chl = *chl - 32;
	}
}

int	is_special_no_nb(char q)
{
	if ((q >= 65 && q <= 90) || (q >= 97 && q <= 122))
	{
		return (0);
	}
	return (1);
}

int	is_special(char q)
{
	if ((q >= 65 && q <= 90) || (q >= 97 && q <= 122) || (q >= 48 && q <= 57))
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;
	char	v;

	i = 1;
	check_is_lower(str);
	while (*(str + i) != '\0')
	{	
		v = *(str + i -1);
		c = *(str + i);
		if (is_special(v) == 1 && is_special_no_nb(c) == 0)
		{
			*(str + i) = c - 32;
		}
		i++;
	}
	return (str);
}
