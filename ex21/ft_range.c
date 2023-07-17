/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:41:39 by pehenri2          #+#    #+#             */
/*   Updated: 2023/07/12 18:20:20 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*intsarray;
	int	i;

	range = max - min;
	intsarray = malloc(sizeof(int) * range);
	i = 0;
	if (max > min)
	{
		while (i < range)
		{
			intsarray[i] = min + i;
			i++;
		}
		return (intsarray);
	}
	else
		return (NULL);
}
