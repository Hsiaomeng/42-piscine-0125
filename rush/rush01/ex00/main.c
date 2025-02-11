#include <stdio.h>
#include <stdlib.h>

unsigned int**  create_matrix(unsigned int size);
void            print_matrix(unsigned int **table, unsigned int size);
int             split_args(char *str, int *dest);
int             ft_strlen(char *str);
void            print_array(int *nb, int size);
int            	error_conditions(int **matrix/*, int size*/);
int				check_duplicate(int *view, int size);
//int				check_existing(int *view, int size);
int				count_view_left(int *view, int size);
int				count_view_right(int *view, int size);
int				check_view_left_right(int *view);
int				*set_sure_values(int *view/*, int size*/);

int main(int ac, char **av)
{
    if (ac != 2 || ft_strlen(av[1]) < 1) // mieux gerer les arguments 
        return (1);

    // Set table size

    unsigned int size = 6;

    // Debug

    // printf("Input size: %d\n", size);
    
    // Create table and save its pointer
    
    unsigned int **matrix = create_matrix(size);

    // print arg0

    int args_counter = 16;
	int	*args = (int *)malloc(sizeof(int) * args_counter);
	if (split_args(av[1], args))
	{
			printf("Error\n");
			return (1);
	}
	// print_array(args, args_counter);

	matrix[0][1] = args[0];
	matrix[0][2] = args[1];
	matrix[0][3] = args[2];
	matrix[0][4] = args[3];

	matrix[5][1] = args[4];
	matrix[5][2] = args[5];
	matrix[5][3] = args[6];
	matrix[5][4] = args[7];

	matrix[1][0] = args[8];
	matrix[2][0] = args[9];
	matrix[3][0] = args[10];
	matrix[4][0] = args[11];

	matrix[1][5] = args[12];
	matrix[2][5] = args[13];
	matrix[3][5] = args[14];
	matrix[4][5] = args[15];

    // Print matrix

    // print_matrix(matrix, size);

    // printf("%d\n", error_conditions((int **) matrix));
	
	// check errors

	if (error_conditions((int **) matrix) == 1)
	{
			printf("Error\n");
			return (1);
	}

	// set sure values

	int i = 1;
	while (i < 5)
	{
		set_sure_values((int *) matrix[i]);
		i++;
	}

	print_matrix(matrix, size);

	/**
	 * On aurait voulu implementer un systeme de transposition et de rotation du tableau, et aussi finir le backtracking, mais butes a 21h30 sur les soucis on s'est dit qu'on allait presenter notre tentative. Ce fut un beau rush, gg 42.
	 * - Corinne, Xiaomeng et Annabelle.
	 */
	
    // ...

    return (0);
}
