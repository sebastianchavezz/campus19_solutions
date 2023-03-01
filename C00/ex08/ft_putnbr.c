/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:26:28 by schavez           #+#    #+#             */
/*   Updated: 2023/03/01 22:07:35 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_print_combn_recursive(int n, int start, int depth, char *buffer)
{
    int i;
    
    if (depth == n)
    {
        write(1, buffer, n);
        if (buffer[0] < '0' + (10 - n))
            write(1, ", ", 2);
        return;
    }
    for (i = start; i <= 9; i++)
    {
        buffer[depth] = '0' + i;
        ft_print_combn_recursive(n, i + 1, depth + 1, buffer);
    }
}

void ft_print_combn(int n)
{
    char buffer[10];
    int i;
    
    if (n < 1 || n > 9)
        return;
    for (i = 0; i < n; i++)
        buffer[i] = '0';
    buffer[n] = '\0';
    ft_print_combn_recursive(n, 0, 0, buffer);
    write(1, "\n", 1);
}
int main(void)
{
	ft_print_combn(4);
	return 0;

}
