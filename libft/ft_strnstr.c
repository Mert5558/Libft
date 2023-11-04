/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:25:39 by merdal            #+#    #+#             */
/*   Updated: 2023/11/03 14:53:07 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int	i;
	int	x;

	i = 0;
	if (*needle == NULL || needle == '\0')
		return (haystack);
	while (i < n && haystack[i] != '\0')
	{
		x = 0;
		while (haystack[i + x] == needle[x] && needle[x] != '\0' && i + x < n)
			x++;
		if (needle[x] == '\0')
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
