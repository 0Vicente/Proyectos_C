#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	

	
	int x,y,z,a,b;
	inicio:
	printf("\n\n \t Total a pagar\n");
	int K[5];
		for (x=1;x<=5;x++){
		
		printf("Ingrese el codigo del estudiante %d: \n", x);
		scanf("%d", &K[x]);
	}
	for (x=1;x<=5;x++){
		printf("El codigo del estudiante %d es %d\n", x,K[x]);
	}
	int VC[5];
		for (y=1;y<=5;y++){
		
		printf("\nIngrese el valor del credito del estudiante %d: \n", K[y]);
		scanf("%d", &VC[y]);
	}
	for (y=1;y<=5;y++){
		printf("Los creditos del estudiante %d tienen un valor de  $%d\n", K[y],VC[y]);
	}
	int NC[5];
		for (z=1;z<=5;z++){
		
		printf("\nIngrese la cantidad de credito del estudiante %d: \n", K[z]);
		scanf("%d", &NC[z]);
	}
	for (z=1;z<=5;z++){
		printf("La cantidad de creditos del estudiante %d  es  %d\n", K[z],NC[z]);
	}
		int Valor[5];
		for (a=1;a<=5;a++){
		Valor[a]=NC[a]*VC[a];
	}
	for (b=1;b<=5;b++){
		printf("\nEl estudiante %d debe pagar por %d creditos a un costo de $%d la suma de %d\n", K[b],NC[b], VC[b], Valor[b]);
	}
	goto inicio;
	getch();
	
	return 0;
}
