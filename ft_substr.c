/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 15:34:49 by awerebea          #+#    #+#             */
/*   Updated: 2020/05/09 15:10:24 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc) and returns a substring from the string ’s’.
** The substring begins at index ’start’ and is of maximum size ’len’.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*substr_ptr;
	size_t	count;

	if (!s)
		return (NULL);
	if (len)
	{
		count = ft_strlen(s);
		if (len > (count - start) && count > start)
			len = count - start;
		else if (start >= count)
			len = 0;
	}
	if (!(substr = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	substr_ptr = substr;
	while (*s && len--)
		*substr++ = s[start++];
	*substr = '\0';
	return (substr_ptr);
}
