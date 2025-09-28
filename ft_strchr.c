/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyavas <alyavas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 02:43:10 by alyavas           #+#    #+#             */
/*   Updated: 2025/06/23 14:37:41 by alyavas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			index;
	unsigned char	character;

	character = (unsigned char)c;
	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == character)
			return ((char *)(s + index));
		index++;
	}
	if (character == '\0')
		return ((char *)(s + index));
	return (NULL);
}
