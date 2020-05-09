/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 22:37:28 by awerebea          #+#    #+#             */
/*   Updated: 2020/05/04 21:14:42 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*str_c;

	str = (char *)s;
	str_c = NULL;
	while (*str)
	{
		if (*str == c)
			str_c = str;
		str++;
	}
	if (c == '\0')
		str_c = str;
	return (str_c);
}
