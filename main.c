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

int     main(void)
{
char    a[] = "ASDSDASadsddsd";
char    b[] = "TESTsadasdda";

printf("%s\n", ft_strchr(a, 'a'));

}
/*
int	main( void )
{
	char	a[50] = "Hello";
	char	b[50] = "123456789";
	
	ft_strlcat(a, b, 4);
	printf("%s", a);
	

	//printf("%d\n", ft_atoi("-2147483648"));
	//printf("%d\n", atoi("-2147483648"));
	//printf("%d\n", ft_strncmp(a, b, 3));
	printf("%lu\n", strlcat(a, b, 3));
} */