/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalmaz <acalmaz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:25:52 by acalmaz           #+#    #+#             */
/*   Updated: 2023/08/08 20:25:53 by acalmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	i;

	if (dstsize <= ft_strlen (dst))
		return (dstsize + ft_strlen (src));
	c = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && c + i + 1 < dstsize)
	{
		dst[c + i] = src[i];
		i++;
	}
	dst[c + i] = '\0';
	return (ft_strlen(dst) + ft_strlen (&src[i]));
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char *dest = "Merhaba";
	char *src = "ayse";

	printf("%zu\n",ft_strlcat(dest,src,4));
	printf("%zu", strlcat(dest, src, 4));
}
*/