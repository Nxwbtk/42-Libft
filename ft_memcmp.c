/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 01:53:45 by bsirikam          #+#    #+#             */
/*   Updated: 2022/06/14 01:53:45 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (s1 == s2)
		return (0);
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	a[50] = "TEST";
	char	b[50] = "TEST";
	printf("%d", ft_memcmp(a,b,3));
}