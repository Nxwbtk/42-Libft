/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 00:55:05 by bsirikam          #+#    #+#             */
/*   Updated: 2022/06/03 00:55:05 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void    *ft_memset (void *str, int c, unsigned int len);

int 	main (void)
{
	char str[50];

	strcpy(str,"This is string.h library function");
	ft_memset(str, '$', 3);
	printf("%s", str);
}