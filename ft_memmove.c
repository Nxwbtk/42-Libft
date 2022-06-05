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

	de = ((char *)dest);
	sc = ((char *)src);
	i = 0;
	if ((dest == src) || n == 0)
		return (dest);
}
