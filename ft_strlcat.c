/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 19:03:45 by awerebea          #+#    #+#             */
/*   Updated: 2020/05/04 18:21:33 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		count_d;
	size_t		count_s;
	char		*d;

	count_d = ft_strlen(dst);
	count_s = ft_strlen(src);
	d = dst + count_d;
	if (size == 0)
		return (count_s);
	if (size > count_d)
		count_s = count_s + count_d;
	else
		count_s = count_s + size;
	while (*src && (size_t)d - (size_t)dst < size - 1)
		*d++ = *src++;
	*d = '\0';
	return (count_s);
}
