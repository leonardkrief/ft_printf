/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 02:04:56 by lkrief            #+#    #+#             */
/*   Updated: 2022/09/26 18:03:32 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	d;

	i = 0;
	tmp = (unsigned char *) s;
	d = c;
	while (i < n && tmp[i] && tmp[i] != d)
		i++;
	if (tmp[i] == d && i < n)
		return ((void *) s + i);
	else
		return (NULL);
}