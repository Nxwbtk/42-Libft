/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:51:13 by bsirikam          #+#    #+#             */
/*   Updated: 2022/06/05 23:19:49 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main( void )
{
	char	a[50] = "Hello World";
	char	b[50] = "aello";
	/*
	ft_strlcat(a, b, 4);
	printf("%s", a);
	*/

	//printf("%d\n", ft_atoi("-2147483648"));
	//printf("%d\n", atoi("-2147483648"));
	printf("%d\n", ft_strncmp(a, b, 3));
	printf("%d\n", strncmp(a, b, 3));
}
