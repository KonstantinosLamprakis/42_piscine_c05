/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:01:26 by klamprak          #+#    #+#             */
/*   Updated: 2024/01/25 12:45:51 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	print_single_board(int chess_board[10][10])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (chess_board[j][i])
			{
				c = '0' + j;
				write(1, &c, 1);
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}

int	check_diagonals(int chess_board[10][10], int row, int col)
{
	int	i;
	int	j;

	i = row;
	j = col;
	while (i >= 0 && j >= 0)
	{
		if (chess_board[i][j])
			return (0);
		i--;
		j--;
	}
	i = row;
	j = col;
	while (j >= 0 && i < 10)
	{
		if (chess_board[i][j])
			return (0);
		i++;
		j--;
	}
	return (1);
}

// checks: rows on the left, up-left diagonial, low-left diagonial
// returns if this position is safe from attacks
int	is_available(int chess_board[10][10], int row, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (chess_board[row][i])
			return (0);
		i++;
	}
	return (check_diagonals(chess_board, row, col));
}

int	recur_func(int chess_board[10][10], int col)
{
	int	i;
	int	num;

	if (col == 10)
	{
		print_single_board(chess_board);
		return (1);
	}
	i = 0;
	num = 0;
	while (i < 10)
	{
		if (is_available(chess_board, i, col))
		{
			chess_board[i][col] = 1;
			num += recur_func(chess_board, col + 1);
			chess_board[i][col] = 0;
		}
		i++;
	}
	return (num);
}

int	ft_ten_queens_puzzle(void)
{
	int	chess_board[10][10];
	int	total_num;
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			chess_board[i][j] = 0;
			j++;
		}
		i++;
	}
	total_num = recur_func(chess_board, 0);
	return (total_num);
}

// int	main(void)
// {
// 	printf("%d", ft_ten_queens_puzzle());
// }