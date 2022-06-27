/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 21:47:47 by bsirikam          #+#    #+#             */
/*   Updated: 2022/06/23 15:36:14 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (!little)
		return (big);
	while (/* condition */)
	{
		/* code */
	}
	return (0);
}

int	main(void)
{
	char	big[50] = "Hello";
	char	small[50] = "";

	printf("%s", ft_strnstr(big, small, 5));
}