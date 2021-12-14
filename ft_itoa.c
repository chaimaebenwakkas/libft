/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-wak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:48:08 by cben-wak          #+#    #+#             */
/*   Updated: 2021/12/02 13:34:31 by cben-wak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_size(long long n)
{
	int	i;

	i = 0;
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	long	nb;
	int		len;
	char	*str;

	nb = (long)n;
	len = count_size(nb);
		i = 0;
	if (nb < 0 || len == 0)
		len++;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		nb *= -1;
		str[i++] = '-';
	}
	while (len-- > i)
	{
		str[len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
