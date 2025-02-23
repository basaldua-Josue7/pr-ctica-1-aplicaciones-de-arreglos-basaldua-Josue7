#include <stdio.h>

int main()
{
    int Oa[2][3]={{7,5,2},{10,12,4}};
    printf("Elaborado por: Basaldua Castro Josue\n");
    printf("Direcciones de memoria: \n"); 
    printf("Con Oa; ");
    printf("%p  \n", Oa);
    printf("Con Oa[0]; ");
    printf("%p  \n", Oa[0]);
    printf("Con &Oa[0][0]; ");
    printf("%p  \n", &Oa[0][0]);
   
    return 0;
}