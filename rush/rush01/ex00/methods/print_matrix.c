#include <stdio.h>

void    print_matrix(unsigned int **table, unsigned int size)
{
    unsigned int X;
    unsigned int Y;

    // print table

    Y = 1;
    X = 1;

    while (Y < size - 1)
    {
        printf("");
        while (X < size - 1)
        {
            printf("%d ", table[Y][X]);
            X++;
        }
        printf("\n");
        Y++;
        X=1;
    }
    
    Y = 0;
    X = 0;
}
