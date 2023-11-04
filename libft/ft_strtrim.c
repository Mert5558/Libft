/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:08:37 by merdal            #+#    #+#             */
/*   Updated: 2023/10/31 15:15:30 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	len_trim;

	len = ft_strlen(s1);
	end = len - 1;
	start = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (start < len && ft_is_in_set(s1[start], set))
		start++;
	while (end >= start && ft_is_in_set(s1[end], set))
		end--;
	if (start > end)
		return (ft_strdup(""));
	len_trim = end - start + 1;
	trim = malloc(len_trim + 1);
	if (trim == NULL)
		return (NULL);
	ft_strlcpy(trim, s1 + start, len_trim + 1);
	return (trim);
}
