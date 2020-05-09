/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 12:18:33 by awerebea          #+#    #+#             */
/*   Updated: 2020/05/05 23:38:36 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		count;
	size_t		i;

	if (NULL == src || NULL == dst)
		return (0);
	count = ft_strlen(src);
	i = count;
	if (size > 0)
	{
		while (size-- > 1 && i--)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (count);
}
