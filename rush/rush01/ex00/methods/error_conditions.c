#include <stdio.h>
#include <stdlib.h>

int error_conditions(int **matrix/*, int size*/)
{
    
    int i;
    i = 1;
    
    while (i < 5)
    {
		if (
			matrix[0][i] + matrix[5][i] < 3
			|| matrix[0][i] + matrix[5][i] > 5
		)
        { 
            return (1);
        }
        i++;
    }
    while (i < 5)
    {
		if (
			matrix[i][0] + matrix[i][5] < 3
			|| matrix[i][0] + matrix[i][5] > 5
		)
        { 
            return (1);
        }
        i++;
    }
    // printf("%d\n", (int) matrix[1][3]);
    return (0);
}

// int main(void)
// {
//     int err;
//     int **nbers = (int **)malloc(sizeof(int *) * 6);
//     for (int i = 0; i < 6; i++)
//     {
// 	    nbers[i] = (int *)malloc(sizeof(int) * 6);
//     }
// 
//     nbers[1][3] = 4;
// 
//     // {
//     //         {
//     //     	    0, 1, 4, 3, 4, 0
//     //         },
//     //         {
//     //     	    4, 1, 4, 3, 4, 3
//     //         },
//     //         {
//     //     	    4, 1, 4, 3, 4, 1
//     //         },
//     //         {
//     //     	    4, 1, 4, 3, 4, 1
//     //         },
//     //         {
//     //     	    4, 1, 4, 3, 4, 1
//     //         },
//     //         {
//     //     	    0, 1, 4, 3, 4, 0
//     //         }
//     // };
//     
//     printf("call error_cond\n");
//     err = error_conditions((int **) nbers, 6);
//     printf("print err\n");
//     printf("%d\n", err);
//     return (0);
// }
