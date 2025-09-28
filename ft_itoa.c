/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyavas <alyavas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 22:20:43 by alyavas           #+#    #+#             */
/*   Updated: 2025/06/23 14:54:28 by alyavas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_numlen(long n)
{
	int	length;

	length = 1;
	if (n < 0)
		n = -n;
	while (n > 9)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		len;

	if (n == 0)
		return (ft_strdup("0"));
	num = (long)n;
	len = ft_numlen(num);
	if (num < 0)
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_memset(str, 0, len + 1);
	str[len] = '\0';
	if (num < 0)
		num = -num;
	while (num > 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
