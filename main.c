/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:36:40 by bsirikam          #+#    #+#             */
/*   Updated: 2022/06/29 18:55:15 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <unistd.h>

int	main(void)
{
	char src[] = "coucou";
	char dest[10];
	memset(dest, 'A', 10);
	printf("%lu\n", ft_strlcpy(dest, src, 2));
	printf("%c\n", dest[0]);
	printf("%c\n", dest[1]);
	printf("%c\n", dest[2]);
	printf("%s\n", dest);
}