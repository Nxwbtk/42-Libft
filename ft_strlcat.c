/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 05:48:53 by bsirikam          #+#    #+#             */
/*   Updated: 2022/06/06 05:48:53 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*sc;
	char	*dest;
	size_t	j;
	size_t	i;

	i = 0;
	j = ft_strlen(dst);
	sc = ((char *)src);
	dest = ((char *)dst);
	while (i < size)
	{
		dest[j + 1] = sc[i];
		i++;
		j++;
	}
}
