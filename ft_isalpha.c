/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpesonen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:36:28 by kpesonen          #+#    #+#             */
/*   Updated: 2019/10/22 15:50:39 by kpesonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= (unsigned char)'A' && c <= (unsigned char)'Z')
		return (1);
	else if (c >= (unsigned char)'a' && c <= (unsigned char)'z')
		return (1);
	else
		return (0);
}
