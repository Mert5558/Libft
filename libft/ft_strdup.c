/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:59:51 by merdal            #+#    #+#             */
/*   Updated: 2023/11/03 19:15:23 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char		*dup;
	size_t		size;
	int			*null_ptr;

	if (str == NULL)
	{
		null_ptr = NULL;
		*null_ptr = 42;
		return (NULL);
	}
	size = ft_strlen(str) + 1;
	dup = malloc(size);
	if (dup == NULL)
		return (NULL);
	ft_strlcpy(dup, str, size);
	return (dup);
}
