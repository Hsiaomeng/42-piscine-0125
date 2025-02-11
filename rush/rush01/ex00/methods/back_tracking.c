#include <stdio.h>

int count_view_left(int *view, int size);
int count_view_right(int *view, int size);
int check_view_left_right(int *view, int size);
int check_duplicate(int *nbers, int size);
int check_existing(int *view, int size, int input_nber);

int** fill_matrix(int **matrix/*, int size*/)
{
    //On backtrack ligne par ligne
    int i;
    int j;
    int k;
    int *view;
    int size;

    i = 1;
    j = 1;
    k = 1;
    size = 6;
    //Il faudrait creer une matrix temp que l on pourrait modifier au  lieu de modifer la matrix originale
    while (i < size - 1)
    {
        view = matrix[i];
        while (check_view_left_right(view, 6) == 0)
        {
            //on remplit la ligne en commencant par k =1
            while (k < 8 && check_existing(matrix[i], 6, k) == 0)
            {
                while (matrix[i][j] == 0)
                {
                    matrix[i][i] = k%4;
                    k++;
                }
            }
            j++;
        }
        i++;
    }
    return (matrix);
}
