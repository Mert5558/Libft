/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:28:09 by merdal            #+#    #+#             */
/*   Updated: 2023/10/27 14:44:36 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int x)
{
	if (x >= 65 && x <= 90)
	{
		x = x + 32;
	}
	return (x);
}
