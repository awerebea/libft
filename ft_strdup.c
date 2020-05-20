/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 14:36:08 by awerebea          #+#    #+#             */
/*   Updated: 2020/05/20 15:43:32 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	len;
	size_t	start;

	start = (size_t)s;
	while (*s)
		s++;
	len = (size_t)s - start;
	s -= len;
	if (!(dest = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (*s)
		*dest++ = (char)*s++;
	*dest = '\0';
	dest -= len;
	return (dest);
}
