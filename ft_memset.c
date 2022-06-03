/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 22:36:12 by bsirikam          #+#    #+#             */
/*   Updated: 2022/06/02 22:36:12 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *str, int c, size_t len)
{
    unsigned char   *ch;
    int i;

    ch = (unsigned char *)str;
    i = 0;
    while (i < len)
    {
        ch[i] = (unsigned char)c;
        i++;
    }
    while (ch[i] != '\0')
        i++;
    ch[i] = '\0';
    return (ch);
}