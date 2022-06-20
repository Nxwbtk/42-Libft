/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 21:03:32 by bsirikam          #+#    #+#             */
/*   Updated: 2022/06/21 00:10:01 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sc;
	unsigned char	ch;

	sc = ((unsigned char *)s);
	ch = ((unsigned char)c);
	i = 0;
	while (i < n)
	{
		if (*sc != ch)
			sc++;
		else
			return (sc);
	}
	return (NULL);
}
