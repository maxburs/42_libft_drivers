/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 06:15:35 by mburson           #+#    #+#             */
/*   Updated: 2017/01/31 06:15:37 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <string.h>
#include <unistd.h>

void	ft_putnstr(const char *s, size_t n)
{
	size_t	len;

	len = ft_strlen(s);
	if (len > n)
		write(1, s, sizeof(char) * len);
	else
		write(1, s, sizeof(char) * n);
}

