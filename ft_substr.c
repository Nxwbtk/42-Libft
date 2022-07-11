/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 09:10:21 by bsirikam          #+#    #+#             */
/*   Updated: 2022/07/05 10:34:59 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char	*src;
	char			*str_ptr;
	size_t			i;
	size_t			slen;

	i = 0;
	str_ptr = malloc(len + 1);
	slen = ft_strlen(s);
	if (!str_ptr || start == '\0')
	{
		ft_bzero(s, slen);
		return (str_ptr);
	}
	src = (unsigned char *)s;
	while (*src)
	{
		if (*src == start)
		{
			while (i < len)
			{
				str_ptr[i] = src[i];
				i++;
			}
		}
		src++;
	}
	return (str_ptr);
}
