/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 13:02:37 by awerebea          #+#    #+#             */
/*   Updated: 2020/05/05 12:49:32 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*a;
	size_t			n;

	n = nmemb * size;
	if (nmemb * size > 2147483647)
		return (NULL);
	if (!(a = malloc(n)))
		return (NULL);
	ft_bzero(a, n);
	return ((void *)a);
}
