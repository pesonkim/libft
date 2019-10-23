/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpesonen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 18:43:52 by kpesonen          #+#    #+#             */
/*   Updated: 2019/10/23 19:38:57 by kpesonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*temp;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	if (!(temp = (unsigned char*)malloc(len)))
		return (NULL);
	else
	{
		ft_memcpy(temp, s, len);
		ft_memcpy(d, temp, len);
	}
	free(temp);
	return (dst);
}
