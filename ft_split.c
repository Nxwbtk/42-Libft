/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 21:45:05 by bsirikam          #+#    #+#             */
/*   Updated: 2022/08/07 18:00:08 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
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
	
	// printf("%s\n", s);
	while (s[i] != c && s[i])
	{
		count++;
		i++;
	}
	return (count);
}

char	*let_split(char const *s, char c, char **split, int i)
{
	int	wlen;
	int	j;

	while (*s == c)
			s++;
	printf("test\n");
	wlen = word_len(s, c);
	// printf("asdasd\n");
	split[i] = (char *)malloc(sizeof(char) * (wlen + 1));
	if (!(split[i]))
		return (0);
	j = 0;
	while (*s != c && *s)
	{
		split[i][j] = *s;
		j++;
		s++;
	}
	split[i][j] = '\0';
	return (split[i]);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**split;
	int		i;

	i = 0;
	printf("test\n");
	count = word_count(s, c);
	// printf("%d\n", count);
	split = (char **)malloc(sizeof(char *) * (count + 1));
	if (!split)
		return (0);
	while (i < count && *s)
	{
		split[i] = let_split(s, c, split, i);
		while (*s == c && *s)
			s++;
		s += ft_strlen(split[i]);
		i++;
	}
	split[count] = NULL;
	return (split);
}

// int	main(void)
// {
// 	int i = 0;
// 	char * * tab = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
// 	printf("%lu\n", sizeof(tab));
// 	while (tab[i])
// 	{
// 		printf("|%s|\n", tab[i++]);
// 	}
// 	printf("|%s|\n", tab[i]);
	
// 	// printf("|%s|\n", tab[1]);
// }