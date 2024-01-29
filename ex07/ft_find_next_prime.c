/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:27:09 by klamprak          #+#    #+#             */
/*   Updated: 2024/01/29 16:28:22 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// it returns either the square root or the left, means if not find the root
// then return the next bigger number
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
	return (left);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrt;

	if ((nb <= 1))
		return (0);
	i = 2;
	sqrt = ft_sqrt(nb);
	while (i <= sqrt)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	i;
// 	int	prev;
// 	int	new;

// 	printf("%d ", ft_find_next_prime(1234230));
// 	// i = 0;
// 	// prev = 0;
// 	// while (i < 300)
// 	// {
// 	// 	new = ft_find_next_prime(i);
// 	// 	if(prev != new)
// 	// 	{
// 	// 		prev = new;
// 	// 		printf("%d ", new);
// 	// 	}
// 	// 	i++;
// 	// }
// }