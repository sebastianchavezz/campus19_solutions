/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 12:36:42 by schavez           #+#    #+#             */
/*   Updated: 2023/03/04 20:21:28 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define N 4
void	print_char(int c)
{
	char	ch;
	
	ch = '0' + c;
	write(1, &ch, 1);
}


void	init_rowRight(int line[N], int board[N][N])
{
	int	i;
	
	i = 0;
	while (i < N)
	{
		if (line [i]== 1)
		{
			if (board[i][0] == 1)
			{
				board[i][1] = 2;
				board[i][2] = 3;	
			}
			
			board[i][3] = 4;
		}
		else if(line[i] == 4)
		{
			if (board[i][0] == 4)
			{
				board[i][1] = 3;
				board[i][2] = 2;	
			}
			board[i][3] = 1;
		}
		i++;
	}	
}
void	init_rowLeft(int line[N], int board[N][N])
{
	int	i;
	
	i = 0;
	while (i < N)
	{
		if (line [i]== 1)
		{
			board[i][0] = 4;
		}
		else if(line[i] == 4)
		{
			board[i][0] = 1;
		}
		i++;
	}	
}
void	init_colDown(int line[N], int board[N][N])
{
	int	i;
	
	i = 0;
	while (i < N)
	{
		if (line [i]== 1)
		{
			if (board[0][i] == 1)
			{
				board[1][i] = 2;
				board[2][i] = 3;
			}
			board[3][i] = 4;
		}
		else if(line[i] == 4)
		{
			if (board[0][i] == 4)
			{
				board[1][i] = 3;
				board[2][i] = 2;
			}
			board[3][i] = 1;
		}
		i++;
	}	
}
void	init_colUp(int line[N], int board[N][N])
{
	int	i;
	
	i = 0;
	while (i < N)
	{
		if (line[i]== 1)
		{
			board[0][i] = 4;
		}
		else if(line[i] == 4)
		{
			board[0][i] = 1;
		}
		i++;
	}	
}

int	*arguments(char *str, int start)
{	
	int j;
	int *values = malloc(N * sizeof(int));
	int i;

	i = 0;
	j = start;
	while(i < N)
	{
		if (*(str + j) >= '0' && *(str + j) <= '9')
		{
			values[i] = (*(str + j) - '0');
			i++;
		}
		j++;
	}
	return (values);	

}

void	printSquare(int square[][N])
{
	int	i;
	int	j;
	i = 0;
	while (i < N)
	{
		j = 0;
		while(j < N)
		{
			print_char(square[i][j]);	
			write(1, ",  ",3);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}

}
int	isSafe(int grid[N][N], int row, int col, int num)
{
	int i;
	
	i = 0;
	while (i < N)
	{	
		if (grid[row][i] == num)
			return 0;
		i++;
	}
	i = 0;
	while (i < N)
	{
		if (grid[i][col] == num)
			return 0;
		i++;
	}
	return 1;

}
int	solver(int grid[N][N], int row, int col)
{
	int i;
	printf("col: %d   row: %d\n",col,row);
	if (row == N - 1  && col == N )
		return 1;

	if (col == N )
	{
		//checker for (colLeft, colRight)
		row++;
		col = 0;
	}

	if (grid[row][col] > 0)
		return solver(grid, row, col +1);

	i = 1;
	while(i <= N)
	{
		if (isSafe(grid, row, col, i) == 1)
		{

			grid[row][col] = i;
			if (solver(grid, row, col +1) == 1)
				return 1;
		}
		grid[row][col] = 0;
		i++;	
	}
	return 0;

}

int	main(int argc, char *argv[])
{
	//ol1up col2up col3up col4up col1down col2down col3down col4down row1left row2lef
	//row3left row4left row1right row2right row3right row4right

	int *colUp = arguments(argv[1],  0);
	int *colDown = arguments(argv[1],8);
	int *rowLeft = arguments (argv[1], 16);
	int *rowRight = arguments (argv[1], 24);
	
	int board[N][N] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};	
	init_colUp(colUp , board);
	init_colDown(colDown, board);
	init_rowLeft(rowLeft, board);
	init_rowRight(rowRight, board);
	printSquare(board);
	printf("----------\n");

	for (int i = 0 ; i < N ; i++)
	{
		printf("%d, ", *(colUp + i));

	}
	printf("\n");
	for (int i = 0 ; i < N ; i++)
	{
		printf("%d, ", *(colDown + i));

	}
	printf("\n");
	for (int i = 0 ; i < N ; i++)
	{
		printf("%d, ", *(rowLeft + i));

	}
	printf("\n");
	for (int i = 0 ; i < N ; i++)
	{
		printf("%d, ", *(rowRight + i));

	}	
	
	printf("\n");
	printf("\n");
	printf("\n");
	if (solver(board, 0, 0) ==1)
		printSquare(board);
	else
		printf("ERROR\n");
	
	printf("\n");
	free(colUp);
	free(colDown);
	free(rowLeft);
	free(rowRight);
	return 0;
}

