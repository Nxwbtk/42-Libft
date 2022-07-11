/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 21:47:47 by bsirikam          #+#    #+#             */
/*   Updated: 2022/07/10 21:17:47 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;
	char	*res;

	i = 0;
	if (!*needle || !*haystack)
		return ((char *)haystack);
	s = (char *)haystack;
	d = (char *)needle;
	while (*s)
	{
		if (*s == *d && i < len)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
