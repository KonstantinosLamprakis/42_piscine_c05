/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:20:36 by klamprak          #+#    #+#             */
/*   Updated: 2024/01/24 10:49:56 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <printf.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	i = 0;
	result = nb;
	while (i < power - 1)
	{
		result *= nb;
		i++;
	}
	return (result);
}

// int	main(void)
// {
// 	printf("result: %d", ft_iterative_power(3, 4));
// }