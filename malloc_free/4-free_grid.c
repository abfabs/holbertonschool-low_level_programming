#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void free_grid(int **grid, int height)
{
    
    if (grid != NULL && height != 0)
    {
        int i;
        for (i = height; i >= 0; i--)
            free(grid[i]);
        free(grid);
    }
    
}