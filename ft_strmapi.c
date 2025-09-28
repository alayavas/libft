/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyavas <alyavas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 22:02:01 by alyavas           #+#    #+#             */
/*   Updated: 2025/06/23 13:19:59 by alyavas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_strmapi_recursive(char const *s, char (*f)(unsigned int, char),
		unsigned int i, char *new_str)
{
	if (!s[i])
	{
		new_str[i] = '\0';
		return (new_str);
	}
	new_str = ft_strmapi_recursive(s, f, i + 1, new_str);
	if (!new_str)
		return (NULL);
	new_str[i] = f(i, s[i]);
	return (new_str);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;

	if (!s || !f)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new_str)
		return (NULL);
	return (ft_strmapi_recursive(s, f, 0, new_str));
}
