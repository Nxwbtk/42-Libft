/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 20:13:40 by bsirikam          #+#    #+#             */
/*   Updated: 2022/08/08 22:55:05 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int nb, int fd)
{
	long	nbr;
	int		i;
	char	c[11];

	nbr = nb;
	i = 0;
	if (nbr == 0)
		ft_putchar('0', fd);
	else if (nb < 0)
	{
		ft_putchar('-', fd);
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		c[i] = nbr % 10 + '0';
		nbr = nbr / 10;
		i++;
	}
	while (--i >= 0)
		ft_putchar(c[i], fd);
}
