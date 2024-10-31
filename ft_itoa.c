/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusliu <yusliu@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 22:59:32 by yusliu            #+#    #+#             */
/*   Updated: 2024/10/04 22:59:32 by yusliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int n);

char	*ft_itoa(int n)
{
	char	*result;
	long	nbr;
	int		len;

	nbr = n;
	len = int_len(n);
	result = (char *)ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	if (nbr < 0)
	{
		result[0] = '-';
		nbr *= -1;
	}
	if (nbr == 0)
		result[0] = '0';
	while (nbr > 0)
	{
		result[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (result);
}

static int	int_len(int nbr)
{
	int	count;

	count = 0;
	if (nbr <= 0)
		count = 1;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}
