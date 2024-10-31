/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusliu <yusliu@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:58:05 by yusliu            #+#    #+#             */
/*   Updated: 2024/10/08 21:56:37 by yusliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char   *tmp;
	unsigned char   c_tmp;
	size_t			i;

	tmp = (unsigned char *)b;
	c_tmp = (unsigned char)c;
	i = 0;

	while (i < len)
	{
		tmp[i] = c_tmp;
		i++;
	}
	return (b);
}
