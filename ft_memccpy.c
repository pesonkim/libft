/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpesonen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:09:13 by kpesonen          #+#    #+#             */
/*   Updated: 2019/10/22 19:36:52 by kpesonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*d;
	const char		*s;

	d = dst;
	s = src;
	while (n-- > 0)
	{
		if ((*d++ = *s++) == (unsigned char)c)
			return (d);
	}
	return (NULL);
}
