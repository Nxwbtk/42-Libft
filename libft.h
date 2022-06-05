/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:12:17 by bsirikam          #+#    #+#             */
/*   Updated: 2022/06/04 02:48:23 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

void	ft_bzero(void *s, size_t n);
int		ft_isalnum(char *str);
int		ft_isalpha(char *str);
int		ft_isdigit(char *str);
int		ft_isascii(int ch);
int		ft_isprint(char *str);
int		ft_strlen(char *str);
void	*ft_memset(void *str, int c, size_t len);
void	*ft_memcpy(void *dest, void *src, size_t n);

#endif
