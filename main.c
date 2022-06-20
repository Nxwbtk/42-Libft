/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:36:40 by bsirikam          #+#    #+#             */
/*   Updated: 2022/06/20 15:10:53 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <unistd.h>

int main(void)
{
	char	dest[30] = "CCCCC";
	//char	*b = "AAAAAAAAA";
	memset(dest, 'r', 15);
	printf("%lu", ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
	write(1, "\n", 1);
	write(1, dest, 16);
/*
	printf("%lu\n", (unsigned long)-1);
	printf("%lu\n", ft_strlcat(a, b, -1));
	printf("%s", a);*/
	return (0);
}
