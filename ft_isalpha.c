/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyavas <alyavas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 02:19:24 by alyavas           #+#    #+#             */
/*   Updated: 2025/06/23 15:04:21 by alyavas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_upper(int c)
{
	int	result;

	result = c - 'A';
	return (result >= 0 && result < 26);
}

static int	ft_is_lower(int c)
{
	int	result;

	result = c - 'a';
	return (result >= 0 && result < 26);
}

int	ft_isalpha(int c)
{
	return (ft_is_upper(c) || ft_is_lower(c));
}
