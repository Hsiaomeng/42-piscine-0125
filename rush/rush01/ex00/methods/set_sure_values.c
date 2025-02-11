#include <stdio.h>

void    set_sure_values(int *view/*, int size*/)
{
    if (view[0] == 4 && view[5]== 1)
    {
        view[1] = 1;
        view[2] = 2;
        view[3] = 3;
        view[4] = 4;
    }
    if (view[0] == 1 && view[5] == 4)
    {
        view[1] = 4;
        view[2] = 3;
        view[3] = 2;
        view[4] = 1;
    }
    if (view[0] == 3 && view[5] == 1)
    {
        view[4] = 4;
    }
    if (view[0] == 1 && view[5] == 3)
    {
        view[1] = 4;
    }
    if (view[0] == 3 && view[5] == 2)
    {
        view[3] = 4;
    }
        if (view[0] == 2 && view[5] == 3)
    {
        view[2] = 4;
    }
    if (view[0] == 2 && view[5] == 1)
    {
        view[1] = 3;
        view[4] = 4;
    }
        if (view[0] == 1 && view[5] == 2)
    {
        view[1] = 4;
        view[4] = 3;
    }
    return;
}

// int main(void)
// {
//     int view[6] = {1,0,0,0,0,3};
//     int i =0;
//     int size = 6;
// 
//     while (i < size)
//     {
//        printf("%d, ", set_sure_values(view,6)[i]);
//        i++;
//     }
//     return (0); 
// 
// }
