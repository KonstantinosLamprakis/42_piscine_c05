/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:37:25 by klamprak          #+#    #+#             */
/*   Updated: 2024/01/24 13:46:10 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if ((nb <= 1))
		return (0);
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	int i;

// 	i = 0;
// 	while(i < 300)
// 	{
// 		if (ft_is_prime(i))
// 			printf("%d ", i);
// 		i++;
// 	}
// }