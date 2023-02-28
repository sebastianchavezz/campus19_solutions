/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:26:28 by schavez           #+#    #+#             */
/*   Updated: 2023/02/28 16:59:16 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	writer_f(int i, int comma, int root_laats, int laats)
{
	char	*c;
	char	d;

	c = "0123456789";
	d = *(c + i);
	if (comma == 1 && root_laats > 0)
	{
		write(1, &d, 1);
		write(1, ", ", 2);
	}
	else if (laats == 0 && root_laats == 0 && comma == 1)
	{
		write(1, &d, 1);
		write(1, "\n", 1);
	}
	else
	{
		write(1, &d, 1);
	}
}

void	handle_one(void)
{
	char	*d;

	d = "0123456789\n";
	write(1, d, 11);
}

void	handle_the_rest(int nb)
{
	int	root;
	int	laatste;
	int	i;

	root = 10 - nb;
	while (root >= 0)
	{
		laatste = 0;
		while (laatste <= root)
		{
			i = 10 - nb - root;
			while (i < 10 - nb - root + (nb -1))
			{
				writer_f(i, 0, root, laatste);
				i++;
			}
			writer_f(i + laatste, 1, root, laatste);
			laatste++;
		}
		root--;
	}
}

void	ft_print_comb(int nb)
{	
	if (nb == 1)
	{
		handle_one();
	}
	else
	{
		handle_the_rest(nb);
	}
}
