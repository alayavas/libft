/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyavas <alyavas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 21:24:56 by alyavas           #+#    #+#             */
/*   Updated: 2025/06/23 03:06:25 by alyavas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlenjoin(const char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while (*s++)
		len++;
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	len;
	char	*res;
	char	*dest;

	len1 = ft_strlenjoin(s1);
	len2 = ft_strlenjoin(s2);
	len = len1 + len2;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	dest = res;
	if (s1)
		while (*s1)
			*dest++ = *s1++;
	if (s2)
		while (*s2)
			*dest++ = *s2++;
	*dest = '\0';
	return (res);
}
