#include <stdlib.h>
#include <string.h>

/**
 * free_grid - Function that  frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 *
 * @grid :2 dimensional array parameter
 * @height :int parameter
 * Return: nothing
*/

void free_grid(int **grid, int height)
{
	int h;

	if (grid != NULL && height != 0)
	{
		for (h = 0; h < height; h++)
		{
			free(grid[h]);
		}
		free(grid);
	}


}
