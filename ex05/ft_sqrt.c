/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:25:42 by klamprak          #+#    #+#             */
/*   Updated: 2024/01/25 13:52:31 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	left;
	int	right;
	int	result;
	int	mid;

	if (nb == 0 || nb == 1)
		return (nb);
	left = 1;
	right = nb;
	result = 0;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (mid <= nb / mid)
		{
			left = mid + 1;
			result = mid;
			continue ;
		}
		right = mid - 1;
	}
	if (result * result == nb)
		return (result);
	return (0);
}

// int	main(void)
// {
// 	printf("%d", ft_sqrt(-64));
// }