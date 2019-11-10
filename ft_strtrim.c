/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpesonen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 18:06:38 by kpesonen          #+#    #+#             */
/*   Updated: 2019/10/24 18:20:54 by kpesonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*new;

	if (ft_strchr(s, ' ') == NULL && ft_strchr(s, '\n') == NULL &&
	ft_strchr(s, '\t') == NULL)
	{
		new = ft_strnew(ft_strlen(s));
		ft_strcpy(new, s);
		return (new);
	}
	return (NULL);
}
