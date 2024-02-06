/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoray <kkoray@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:35:39 by kkoray            #+#    #+#             */
/*   Updated: 2024/02/06 15:36:53 by kkoray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;

	len = 0;
	while (src[len])
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	while (len >= 0)
	{
		dest[len] = src[len];
		len--;
	}
	return (dest);
}
