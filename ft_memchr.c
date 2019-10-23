/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpesonen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 17:08:45 by kpesonen          #+#    #+#             */
/*   Updated: 2019/10/23 18:37:10 by kpesonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = s;
	if (n != 0)
	{
		while (n-- > 0)
		{
			if (*p == (unsigned char)c)
				return ((void*)p);
			p++;
		}
	}
	return (NULL);
}
