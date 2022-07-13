/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 09:10:21 by bsirikam          #+#    #+#             */
/*   Updated: 2022/07/13 19:55:54 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;
	char	*sc;

	res = malloc(len + 1);
	if (res == NULL)
		return (NULL);
	sc = (char *)s;
	i = 0;
	while (sc[start + i] && i < len)
	{
		res[i] = sc[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
