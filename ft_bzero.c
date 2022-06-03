/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 02:05:44 by bsirikam          #+#    #+#             */
/*   Updated: 2022/06/03 02:05:44 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    char   *ch;
    size_t    i;

    ch = (char *)s;
    i = 0;
    while (i < n)
    {
        ch[i] = 0;
        i++;
    }
}

#include <stdio.h>
int main()
{
	char *st = "HelloWorld";
    printf("%s", st);
	ft_bzero(st,3);
	printf("%s", st);
	return (0);
}