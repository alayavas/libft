/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyavas <alyavas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 02:45:27 by alyavas           #+#    #+#             */
/*   Updated: 2025/06/23 13:27:00 by alyavas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char		*ptr;
	unsigned char		temp_value;

	ptr = (unsigned char *)s;
	temp_value = (unsigned char)c;
	while (n > 0)
	{
		*ptr = temp_value;
		ptr++;
		n--;
	}
	return (s);
}
