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
	size_t	d_len;
	size_t	sc_len;
	size_t	result;
	size_t	i;
	size_t	j;
	char	*sc;

	result = 0;
	i = 0;
	j = 0;
	while (!src || !dst)
		return (0);
	sc = ((char	*)src);
	d_len = ft_strlen(dst);
	sc_len = ft_strlen(sc);
	if (size == 0 || d_len > size)
		return (0);
	else if (d_len <= size)
	{
		j = d_len + i;
		while (j < size)
		{
			dst[d_len] = sc[i];
			d_len++;
			j++;
		}
		result = d_len + sc_len;
	}
	return (result);
}
