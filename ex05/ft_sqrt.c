/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:25:42 by klamprak          #+#    #+#             */
/*   Updated: 2024/01/24 12:34:08 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	calc_root(int nb, int low, int high)
{
	int	avg;
	int	sqr;

	if (low > high)
		return (0);
	avg = (low + high) / 2;
	sqr = avg * avg;
	if (sqr == nb)
	{
		return (avg);
	}
	else if (sqr < nb)
	{
		return (calc_root(nb, avg + 1, high));
	}
	return (calc_root(nb, low, avg - 1));
}

int	ft_sqrt(int nb)
{
	return (calc_root(nb, 0, nb));
}

// int	main(void)
// {
// 	printf("%d", ft_sqrt(13));
// }