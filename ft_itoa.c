/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:50:31 by bsirikam          #+#    #+#             */
/*   Updated: 2022/08/07 22:01:10 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_long(int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		nlong;
	int		i;

	if (n < 0)
		n = -n;
	nlong = find_long(n);
	i = 0;
	res = (char *)malloc(sizeof(char) * (nlong + 1));
	while (n > 0 && i < nlong)
	{
		res[i] = '0' + (n % 10);
		n = n / 10;
		i++;
	}
	res[i] = '\0';
	// printf("%d\n", nlong);
	return (res);
}

int	main(void)
{
	// int	i;
	// int	a = 100000;

	// i = 0;
	// while (a > 0)
	// {
	// 	a = a / 10;
	// 	i++;
	// }
	// printf("%d", i);
	printf("|%s|\n", ft_itoa(300));
}