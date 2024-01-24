/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:01:14 by klamprak          #+#    #+#             */
/*   Updated: 2024/01/24 09:19:08 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	if (nb <= 0)
		return (0);
	i = 1;
	fact = 1;
	while (i <= nb)
	{
		fact = fact * i;
		i++;
	}
	return (fact);
}

// int	main(void)
// {
// 	printf("Fact is: %d", ft_iterative_factorial(-2));
// }