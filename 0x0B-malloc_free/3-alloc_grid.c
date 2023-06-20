#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - create grid by nested loop
 * @height: height input
 * @width: width input
 * Return: pointer to 2 dimention, array
 */

int **alloc_grid(int width, int height)
{
	int *mee;
	int x, Y;

	if (width <= 0 || height <= 0)
		return (NULL);
	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		mee[x] = malloc(sizeof(int) * width);

		if (mee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(mee[x]);

			free(mee);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			mee[x][y] = 0;
	}

	return (mee);
}
