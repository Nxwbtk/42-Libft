/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 21:45:05 by bsirikam          #+#    #+#             */
/*   Updated: 2022/08/03 23:44:56 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] && c)
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c)
				i++;
			count++;
		}
	}
	return (count);
}

int	word_len(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != c && s[i])
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	int		wlen;
	char	**split;
	int		i;

	i = 0;
	count = word_count(s, c);
	split = (char **)malloc(sizeof(char *) * (count + 1));
	if (!split)
		return (NULL);
	while (i < count)
	{
		while ()
	}
	
}

int	main(void)
{
	char *a = "Hello, World, Test,";

	printf("%d", word_count(a, ','));
}