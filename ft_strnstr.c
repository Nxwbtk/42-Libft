/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 21:47:47 by bsirikam          #+#    #+#             */
/*   Updated: 2022/07/04 23:36:13 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (*little == '\0' || big == little)
		return ((char *)big);
	while (*big && len > 0)
	{
		if (ft_strncmp((char *)big, (char *)little, len) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (0);
}

#include <string.h>
int	main(void)
{
	printf("%s\n", strnstr("lorem ipsum dolor sit amet", "lorem", 15));
}