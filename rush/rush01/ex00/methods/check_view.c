#include <stdio.h>


int count_view_left(int *view, int size)
{
    int max;
    int counter_height;
    int i;

    max = 0;
    counter_height = 0;
    i = 1;
    while (i < size-2)
    {
        if (view[i] > max && max < 4)
        {
            max = view[i];
            counter_height++;
        }
    i++;
    }
    return (counter_height); 
}

int count_view_right(int *view, int size)
{
    int max;
    int counter_height;
    int i;

    max = 0;
    counter_height = 0;
    i = size - 2;
    while (i >= 0)
    {
        if (view[i] > max && max < 4)
        {
            max = view[i];
            counter_height++;
        }
    i--;
    }
    return (counter_height); 
}


int check_view_left_right(int *view)
{
    if (view[0] == count_view_left(view, 6) && view[5] == count_view_right(view, 6))
    {
        return (1);
    }
    return (0);
} 



// int main(void)
// {
//     int nbers[6] = {4,1,2,3,4,1};
// 
//     printf("%d\n", count_view_left(nbers,6));
//     printf("%d\n", count_view_right(nbers,6));
//     return (0); 
// 
// }
