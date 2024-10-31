/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: yusliu <yusliu@student.42malaga.com>       +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/09/19 19:23:52 by yusliu            #+#    #+#             */
/*   Updated: 2024/09/19 19:23:52 by yusliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char				*reset;
	char				c1;
	unsigned int		i;

	reset = NULL;
	c1 = (char )c;
	i = 0;
	while (s[i])
	{
		if (s[i] == c1)
		{
			reset = (char *)&s[i];
		}
		i++;
	}
	if (c1 == '\0')
	{
		return ((char *)&s[i]);
	}
	return (reset);
}
