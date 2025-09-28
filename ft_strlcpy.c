/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyavas <alyavas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 02:42:06 by alyavas           #+#    #+#             */
/*   Updated: 2025/06/23 02:42:02 by alyavas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*src_start;

	src_start = src;
	if (size != 0)
	{
		while (*src && size > 1)
		{
			*dst++ = *src++;
			size--;
		}
		*dst = '\0';
	}
	while (*src != '\0')
		src++;
	return ((size_t)(src - src_start));
}
