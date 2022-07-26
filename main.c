/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:36:40 by bsirikam          #+#    #+#             */
/*   Updated: 2022/07/26 00:47:23 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <unistd.h>

int	main(void)
{
	// char	*dest;
	// dest = (char *)malloc(sizeof(*dest) * 15);
	// memset(dest, 0, 15);
	// memset(dest, 'r', 6);
	// ft_strlcpy(dest, "lorem", 15);
	// printf("%s\n", dest);
	// printf("%c\n", dest[10]);
	// char src[] = "coucou";
	// char dest[10];
	// memset(dest, 'A', 10);
	// printf("%lu\n", ft_strlcpy(dest, src, 2));
	// printf("%s\n", dest);
	printf("%s\n", ft_strtrim("abcdba", "acb"));
}