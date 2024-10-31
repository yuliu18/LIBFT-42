/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: yusliu <yusliu@student.42malaga.com>       +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/09/19 12:33:13 by yusliu            #+#    #+#             */
/*   Updated: 2024/09/19 12:33:13 by yusliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s1;
	unsigned char		s2;
	size_t				i;

	s1 = (const unsigned char *)s;
	s2 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s1[i] == s2)
		{
			return ((void *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
