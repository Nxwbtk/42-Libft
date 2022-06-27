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
	ssize_t			s_len;
	unsigned char	ch;

	s_len = ft_strlen(s);
	ch = (unsigned char)c;
	while (s_len >= 0)
	{
		if (s[s_len] == ch)
			return (((char *)&s[s_len]));
		s_len--;
	}
	return (0);
}
