/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 04:00:44 by bsirikam          #+#    #+#             */
/*   Updated: 2022/06/07 04:00:44 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*src;

	src = ((char *)s);
	if (c == '\0' || *src == '\0')
		return (src);
	while (*src)
	{
		if (*src == c)
		{
			return (src);
		}
		src++;
	}
	return (NULL);
}
