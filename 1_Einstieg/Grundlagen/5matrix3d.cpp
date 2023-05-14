#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	const int nx = 3;
	const int ny = 2;
	const int nz = 2;
	int ***matrix;

	matrix = (int ***)malloc(nz * sizeof(int *));

	for (int z = 0; z < nz; z++)
	{
		matrix[z] = (int **)malloc(ny * sizeof(int));

		for (int y = 0; y < ny; y++)
		{
			matrix[z][y] = (int *)malloc(nx * sizeof(int));
			for (int x = 0; x < nx; x++)
			{
				matrix[z][y][x] = (z + 1) * 100 + (y + 1) * 10 + x + 1;
			}
		}
	}
	for (int z = 0; z < nz; z++)
	{
		//printf("z = %d:\n", z + 1);

		for (int y = 0; y < ny; y++)
		{
			for (int x = 0; x < nx; x++)
			{
				printf("%i ", matrix[z][y][x]);
			}
			printf("\n");
		}
		printf("\n");
	}

	for (int z = 0; z < nz; z++)
	{

		for (int y = 0; y < ny; y++)
		{
			free(matrix[z][y]);
		}
		free(matrix[z]);
	}
	free(matrix);
}
