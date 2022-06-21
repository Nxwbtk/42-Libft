/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:36:40 by bsirikam          #+#    #+#             */
/*   Updated: 2022/06/21 17:57:16 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <unistd.h>

int	main(void)
{
	char	*dest;

	dest = (char *)malloc(sizeof(*dest) * 15);
	
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	printf("%lu\n", ft_strlcat(dest, "lorem", 15));
	write(1, "\n", 1);
	write(1, dest, 15);
	return (0);
}
