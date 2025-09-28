/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyavas <alyavas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 01:23:33 by alyavas           #+#    #+#             */
/*   Updated: 2025/06/23 15:02:00 by alyavas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	free_split(char **arr, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(arr[i]);
		i++;
	}
}

static int	word_count(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] == c)
		i++;
	if (!s[i])
		return (0);
	while (s[i] && s[i] != c)
		i++;
	return (1 + word_count(s + i, c));
}

static int	split_partial(const char *s, char c, char **arr, int index)
{
	int	start;
	int	len;

	start = 0;
	while (s[start] && s[start] == c)
		start++;
	if (!s[start])
	{
		arr[index] = NULL;
		return (1);
	}
	len = 0;
	while (s[start + len] && s[start + len] != c)
		len++;
	arr[index] = ft_substr(s, start, len);
	if (!arr[index])
		return (0);
	if (!split_partial(s + start + len, c, arr, index + 1))
	{
		free_split(arr, index + 1);
		return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		count;

	if (!s)
		return (NULL);
	count = word_count(s, c);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	if (!split_partial(s, c, result, 0))
	{
		free(result);
		return (NULL);
	}
	return (result);
}
