/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 13:35:45 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/20 14:09:59 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static size_t	ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char			*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int		i;
	int		j;
	int		start;
	char	*point;

	i = 0;
	point = NULL;
	if (ft_strlen(needle) == 0)
		return ((char*)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		start = i;
		while (haystack[i + j] == needle[j] && (i + j) < (int)n)
		{
			if (needle[j + 1] == '\0')
				return (point = (char*)&haystack[start]);
			j++;
		}
		i++;
	}
	return (point);
}
