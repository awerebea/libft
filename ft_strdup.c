/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 14:36:08 by awerebea          #+#    #+#             */
/*   Updated: 2020/05/07 16:07:45 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	char	*dest_ptr;

	if (!(dest = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	dest_ptr = dest;
	while (*s)
		*dest++ = (char)*s++;
	*dest = '\0';
	return (dest_ptr);
}
