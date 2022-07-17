/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:48:20 by bsirikam          #+#    #+#             */
/*   Updated: 2022/07/17 20:35:59 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	sset;
	size_t	s1_len;
	size_t	i;
	size_t	j;
	size_t	k;

	sset = ft_strlen(set);
	s1_len = ft_strlen(s1);
	res = malloc((s1_len - sset) + 1);
	i = 0;
	j = 0;
	k = 0;
	if (set[i] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		while (s1[i] == set[j] && set[j] != '\0')
		{
			i++;
			j++;
		}
		res[k] = s1[i];
		k++;
		i++;
	}
	res[j] = '\0';
	return (res);
}
