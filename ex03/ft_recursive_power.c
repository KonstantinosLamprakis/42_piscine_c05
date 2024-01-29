/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:52:04 by klamprak          #+#    #+#             */
/*   Updated: 2024/01/24 11:03:03 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <printf.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}

// int	main(void)
// {
// 	printf("result: %d", ft_recursive_power(3, 2));
// }