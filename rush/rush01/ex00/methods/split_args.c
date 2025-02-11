#include <stdlib.h>
#include <stdio.h>

int g_error;

int    split_args(char *str, int *dest)
{
    char *temp = (char *)malloc(sizeof(char) * 3);
    int i;
    int j;
//    int k;

    i = 0;
    j = 0;
    while (str[i])
    {
		if (str[i] == ' ' && str[i-1] == ' ')
		{
				return (1);
		}
		if ((!(str[i+1] >= '0') && !(str[i+1] <= '9')) && str[i+1] != '\0') 
		{
				return (1);
		}
        if (str[i] >= '0' && str[i] <= '9') 
        {
            // k = 0;
            // temp[k] = str[i];
            // k++;
            // while (str[i + k] != ' ')
            // {
			// 	if (!str[i + k])
			// 			break;
            //     temp[k] = str[i + k];
            //     k++;
            // }
			temp[0] = str[i];
            temp[1] = '\0';
            dest[j] = atoi(temp);
			// printf("[%d] %d\n", j, dest[j]);
            j++;
        }
        i++;
    } 

    return (0);
}
