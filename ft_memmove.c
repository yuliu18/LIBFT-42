/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusliu <yusliu@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 19:19:44 by yusliu            #+#    #+#             */
/*   Updated: 2024/09/16 18:32:44 by yusliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst1;
	char	*src1;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	dst1 = (char *)dst;
	src1 = (char *)src;
	i = 0;
	if (dst1 > src1)
	{
		while (len-- > 0)
			dst1[len] = src1[len];
	}
	else
	{
		while (i < len)
		{
			dst1[i] = src1[i];
			i++;
		}
	}
	return (dst);
}
