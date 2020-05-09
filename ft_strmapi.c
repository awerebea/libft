/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 12:01:43 by awerebea          #+#    #+#             */
/*   Updated: 2020/05/09 15:17:00 by awerebea         ###   ########.fr       */
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

	if (!s || !f)
		return (NULL);
	len_str = ft_strlen(s);
	if (!(result = malloc(sizeof(char) * len_str + 1)))
		return (NULL);
	i = -1;
	while (++i < len_str)
		result[i] = f(i, s[i]);
	result[i] = '\0';
	return (result);
}
