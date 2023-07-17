/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:15:22 by pehenri2          #+#    #+#             */
/*   Updated: 2023/07/14 15:56:26 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 12 || nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
