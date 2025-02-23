#include <stdio.h>

int main()
{
    int Oa[2][3]={{7,5,2},{10,12,4}};
    printf("Elaborado por: Basaldua Castro Josue\n");
    printf("Direcciones de memoria: \n"); 
    for (int i = 0; i < 2; i++) {
        printf("\n");
        for (int j = 0; j < 3; j++) {
            printf("%p  ", &Oa[i][j]);
        }

    }
    return 0;
}