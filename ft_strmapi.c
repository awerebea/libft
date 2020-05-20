/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 12:01:43 by awerebea          #+#    #+#             */
/*   Updated: 2020/05/20 16:26:37 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function ’f’ to each character of the string ’s’ to create
** a new string (with malloc) resulting from successive applications of ’f’.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	len_str;
	unsigned int	i;
	size_t			start;

	if (!s || !f)
		return (NULL);
	start = (size_t)s;
	while (*s)
		s++;
	len_str = (unsigned int)((size_t)s - start);
	s -= len_str;
	if (!(result = malloc(sizeof(char) * len_str + 1)))
		return (NULL);
	i = -1;
	while (++i < len_str)
		result[i] = f(i, s[i]);
	result[i] = '\0';
	return (result);
}
