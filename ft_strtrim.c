/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyavas <alyavas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 21:07:12 by alyavas           #+#    #+#             */
/*   Updated: 2025/06/10 20:03:38 by alyavas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	len = ft_strlen(s1);
	start = 0;
	while (start < len && ft_strchr(set, s1[start]) != NULL)
		start++;
	if (start == len)
		return (ft_strdup(""));
	end = len - 1;
	while (end > start && ft_strchr(set, s1[end]) != NULL)
		end--;
	return (ft_substr(s1, start, end - start + 1));
}
