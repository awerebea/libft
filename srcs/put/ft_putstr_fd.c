/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 12:42:35 by awerebea          #+#    #+#             */
/*   Updated: 2020/10/30 15:52:26 by awerebea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the string ’s’ to the given file descriptor.
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		ft_putchar_fd(*s++, fd);
}
