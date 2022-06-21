/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:02:13 by bsirikam          #+#    #+#             */
/*   Updated: 2022/06/21 21:36:38 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*sc;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	i = 0;
	sc = malloc(sizeof(char) * s_len + 1);
	if (sc == NULL)
		return (NULL);
	while (s[i])
	{
		sc[i] = s[i];
		i++;
	}
	sc[i] = '\0';
	return (sc);
}
