/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 13:27:44 by schavez           #+#    #+#             */
/*   Updated: 2023/03/03 13:47:49 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>


void swap(char **str1, char **str2)
{
	char *temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;

}


int main(int argc, char *argv[])
{
	int i;
	int j;


	i = 0;
	while (i < argc -1)
	{
		j = i + 1; 
		while (j < argc )	
		{
			if (argv[i][0] > argv[j][0])
			{
				swap(&argv[i], &argv[j]);
				
			}
			j++;
		}
		i++;

	}
	
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{	
			write(1,&argv[i][j],1);
			j++;
		}
		write(1,"\n",1);
		i++;
	}

}

