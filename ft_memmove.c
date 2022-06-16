/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 01:11:40 by bsirikam          #+#    #+#             */
/*   Updated: 2022/06/04 01:11:40 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*sc;
	char	*de;
	size_t	i;

	i = 0;
	sc = ((char *)src);
	de = ((char *)dest);
	if ((!dest && !sc) || n == 0)
		return (dest);
	if (de > sc)
	{
		while (n-- > 0)
			de[n] = sc[n];
	}
	else
	{
		while (i < n)
		{
			de[i] = sc[i];
			i++;
		}
	}
	return (dest);
}
