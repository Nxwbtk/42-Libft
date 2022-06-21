/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 23:18:03 by bsirikam          #+#    #+#             */
/*   Updated: 2022/06/11 23:18:03 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;
	size_t	i;
	char	*sc;

	s_len = ft_strlen(s);
	i = 0;
	sc = ((char *)s);
	while (s_len > 0)
	{
		if (*sc == c)
			return (sc);
		*s--;
		s_len--;
	}
	return (NULL);
}
