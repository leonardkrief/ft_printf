/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 02:09:47 by lkrief            #+#    #+#             */
/*   Updated: 2022/09/25 02:10:10 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>

char	*ft_strdup(const char *s1)
{
	char	*cp;
	int		len;

	len = 0;
	while (s1[len])
		len++;
	cp = malloc(sizeof(*cp) * (len + 1));
	if (!cp)
	{
		errno = ENOMEM;
		return (NULL);
	}
	len = -1;
	while (s1[++len])
		cp[len] = s1[len];
	cp[len] = '\0';
	return (cp);
}