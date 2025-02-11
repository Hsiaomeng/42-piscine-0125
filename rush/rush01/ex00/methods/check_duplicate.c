#include <stdio.h>

int check_duplicate(int *view, int size)
{
    int i;
    int j;
    int duplic;

    i = 1;
    j = i + 1;
    duplic = 0;

    while (i <= size -2)
    {
        printf("i %d\n",i);
        while (j <= size - 1 )
        {
            printf("j %d\n",j);
            if (view[i] == view[j])
            {
                duplic = 1;
            }
            j++;
        }
        i++;
        j= i + 1;
    }
    return (duplic);
}

int check_existing(int *view, int size, int input_nber)
{
    int i;
    // int j;
    int duplic;

    i = 1;
    duplic = 0;

    while (i < size -1)
    {
        //printf("i %d\n",i);
        if (view[i] == input_nber)
        {
            duplic = 1;
        }
        i++;
    }
    return (duplic);
}

//int main(void)
//{
//    int view[4] = {1,4,3,4};
//    printf("%d\n", check_duplicate(view,4));
//    return (0);
//}
