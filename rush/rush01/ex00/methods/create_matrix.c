#include <stdlib.h>
#include <stdio.h>

// Creates a two-dimensional array of size (size^2) then returns it. 
unsigned int **create_matrix(unsigned int size)
{
    // Declare variables
    
    unsigned int    **table;
    unsigned int    i;
    unsigned int    Y;
    unsigned int    X;

    // Allocate memory

    table = (unsigned int**)malloc(sizeof(unsigned int*) * size);
    
    i = 0;
    while (i < size)
    {
        table[i] = (unsigned int*)malloc(sizeof(unsigned int) * size);
        i++;
    }
    
    // Set XY cursor to 0
    
    Y = 0;
    X = 0;

    // Print output size
    // printf("Output size: %d\n", size * size);

    // Mettre 0 partout dans le tableau

    while (Y < size)
    {
        while (X < size)
        {
            // printf("Y: %d | X: %d\n", Y, X); // debug
            table[Y][X] = 0;
            X++;
        }
        Y++;
        X=0;
    }

    return table;
}
