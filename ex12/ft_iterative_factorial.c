/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:10:37 by pehenri2          #+#    #+#             */
/*   Updated: 2023/07/14 15:21:30 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 12 || nb < 0)
		return (0);
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
