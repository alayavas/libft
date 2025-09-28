/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyavas <alyavas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:05:58 by alyavas           #+#    #+#             */
/*   Updated: 2025/06/23 13:18:29 by alyavas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	full_size;
	void	*ptr;

	full_size = nmemb * size;
	ptr = malloc(full_size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, full_size);
	return (ptr);
}
