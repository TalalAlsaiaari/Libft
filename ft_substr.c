/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 00:58:10 by talsaiaa          #+#    #+#             */
/*   Updated: 2021/10/16 03:34:48 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (0);
	if ((size_t) start < ft_strlen(s))
	{
		while (len--)
		{
			substr[i] = s[(size_t) start];
			i++;
			start++;
		}
	}
	substr[i] = '\0';
	return (substr);
}
