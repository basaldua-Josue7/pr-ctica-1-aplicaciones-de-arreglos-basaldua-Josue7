#include <stdio.h>

int main(){
	int Six[]={2,4,5,3,7};
	char k[]={'c','r','e','a','m'};
	double Gi[]={17,23,54};
	printf("Elaborado por: Basaldua Castro Josue.\n");
	printf("Memoria con enteros: \n");
	for(int i=0;i<5;i++){
		printf("%p  ", &Six[i]);
	}
	printf("\nMemoria con char: \n");
	for(int i=0;i<5;i++){
		printf("%p  ", &k[i]);
	}
	printf("\nMemoria con double: \n");
	for(int i=0;i<3;i++){
		printf("%p  ", &Gi[i]);
	}
	return 0;
}