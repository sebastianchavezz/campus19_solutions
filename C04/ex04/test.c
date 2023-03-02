/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:20:31 by schavez           #+#    #+#             */
/*   Updated: 2023/03/02 15:45:57 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_base(int nbr, char *base)
{
	

}
void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		nb = -1 * nb;
		write(1, "-", 1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = inb % 10;
	}
	c = nb + '0';
	write(1, &c, 1);
}
int main(void)
{
	ft_putnbr(4555);

}
