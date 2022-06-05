/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 01:01:17 by bsirikam          #+#    #+#             */
/*   Updated: 2022/06/04 18:34:48 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	unsigned char	*de;
	unsigned char	*sc;
	size_t			i;

	de = ((unsigned char *)dest);
	sc = ((unsigned char *)src);
	i = 0;
	while (i < n)
	{
			de[i] = sc[i];
			i++;
	}
}
