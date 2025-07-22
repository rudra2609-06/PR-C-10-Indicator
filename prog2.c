// Cubes Generator

#include <stdio.h>

void cubes(int rows, int cols, int a[rows][cols])
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			a[i][j] = a[i][j] * a[i][j] * a[i][j];
		}
	}
}

int main()
{
	int size;
	printf("Enter size: ");
	scanf("%d", &size);
	int arr[size][size];

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	cubes(size, size, arr);

	printf("\nMatrix after cubing each element:\n");
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}