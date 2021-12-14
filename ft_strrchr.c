/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-wak <cben-wak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:06:36 by cben-wak          #+#    #+#             */
/*   Updated: 2021/12/04 18:36:35 by cben-wak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	char	*last_occ;

	last_occ = NULL;
	i = 0;
	while (str[i])
		if (str[i++] == (char) c)
			last_occ = (char *)str + i - 1;
	if (!c)
		return ((char *)str + i);
	return (last_occ);
}
