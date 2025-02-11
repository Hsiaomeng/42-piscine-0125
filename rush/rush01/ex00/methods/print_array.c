#include <stdio.h>
void print_array(int *nb, int size)
{
    int i = 0;
    while (i < size - 1)
    {
        printf("%d, ", nb[i]);
        i++;
    }
    printf("%d\n", nb[i]);
}
