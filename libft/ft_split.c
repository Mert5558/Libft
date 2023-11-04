/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:42:34 by merdal            #+#    #+#             */
/*   Updated: 2023/11/03 19:42:49 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	if (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i] != '\0')
			{
				i++;
			}
		}
		else
			i++;
	}
	return (word);
}

char	*ft_string_split(char **split, char const *s, char c, int total_words)
{
	int			i;
	int			len;
	char const	*start;
	char const	*end;

	i = 0;
	start = s;
	while (i < total_words)
	{
		while (*start == c)
			start++;
		end = ft_strchr(start, c);
		if (end == NULL)
			end = start + ft_strlen(start);
		len = end - start + 1;
		split[i] = (char *)malloc(len + 1);
		if (split[i] == NULL)
			return (NULL);
		ft_strlcpy(split[i], start, len);
		split[i][len] = '\0';
		i++;
		start = end + 1;
	}
	split[total_words] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		total_words;

	if (c == '\0')
		return (s);
	if (s == NULL)
		return (NULL);
	total_words = ft_count_words((char *)s, c);
	if (total_words == 0)
	{
		split = (char **)malloc(sizeof(char *));
		if (split != NULL)
			split[0] = NULL;
	}
	else
	{
		split = (char **)malloc(sizeof(char *) * (total_words + 1));
		if (split != NULL)
			ft_string_split(split, s, c, total_words);
	}
	return (split);
}
