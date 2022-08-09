/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:48:20 by bsirikam          #+#    #+#             */
/*   Updated: 2022/08/09 02:02:52 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	front(const char *s1, const char *set)
{
	size_t	begin;

	begin = 0;
	while (s1[begin] && ft_strrchr(set, s1[begin]))
		begin++;
	if (begin == ft_strlen(s1))
		begin = 0;
	return (begin);
}

size_t	last(const char *s1, const char *set)
{
	size_t	finish;

	finish = ft_strlen(s1);
	while (ft_strrchr(set, s1[finish]) && finish)
		finish--;
	return (finish);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	finish;
	size_t	size;
	size_t	i;
	char	*dest;

	first = front(s1, set);
	finish = last(s1, set);
	size = finish - first + 1;
	i = 0;
	if (size == 1)
	{
		dest = malloc(sizeof(char) * size);
		if (!dest)
			return (NULL);
	}
	else
	{
		dest = malloc(sizeof(char) * (size + 1));
		while (i < size)
			dest[i++] = s1[first++];
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	*s = ft_strtrim("abcdba", "acb");
// 	printf("%s\n", s);
// }