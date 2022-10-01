/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 01:46:26 by lkrief            #+#    #+#             */
/*   Updated: 2022/09/25 05:00:16 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	z;

	z = (-(n < 0) + (n >= 0)) * n;
	if (n < 0)
		ft_putchar_fd('-', 1);
	if (z >= 10)
		ft_putnbr_fd(z / 10, fd);
	ft_putchar_fd('0' + z % 10, 1);
}