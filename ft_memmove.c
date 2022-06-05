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

void	*ft_memmove(void *dest, void *src, size_t n)
{
	char	*de;
	char	*sc;
	size_t	i;

	sc = ((char *)src);
	i = 0;
	if ((!de && !sc) || n == 0)
		return (NULL);
	while (n-- > 0)
	{
		((char *)dest)[n] = sc[n];
	}
}
