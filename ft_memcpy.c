/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusliu <yusliu@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:37:02 by yusliu            #+#    #+#             */
/*   Updated: 2024/09/15 17:46:34 by yusliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst1;
	unsigned char	*src1;

	if (src == (void *)0 && dst == (void *)0)
		return (dst);
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	while (n > 0)
	{
		*(dst1++) = *(src1++);
		n--;
	}
	return (dst);
}
