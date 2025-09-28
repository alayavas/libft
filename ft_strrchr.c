/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyavas <alyavas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 02:40:32 by alyavas           #+#    #+#             */
/*   Updated: 2025/06/23 14:58:33 by alyavas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			length;
	size_t			index;
	unsigned char	character;

	character = (unsigned char)c;
	length = 0;
	while (s[length] != '\0')
		length++;
	index = length;
	while (index > 0)
	{
		index--;
		if ((unsigned char)s[index] == character)
			return ((char *)(s + index));
	}
	if (character == '\0')
		return ((char *)(s + length));
	return (NULL);
}
