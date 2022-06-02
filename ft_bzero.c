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

void    ft_bzero(void *s, unsigned int n)
{
    unsigned char ch;
    unsigned int    i;

    ch = (unsigned char *)s;
    i = 0;
    while (ch[i] != '\0' && i < n)
    {
        ch[i] = '\0';
        i++;
    }
    while (ch[i] != '\0')
        i++;
}