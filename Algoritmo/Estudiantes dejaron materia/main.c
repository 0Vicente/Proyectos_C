#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int m,n,x,y;
		inicio:
	printf("\n\n \t Estudiantes que dejaron Mat o Comp\n");

	printf("Introduce la cantidad de estudiantes que perdieron Matematicas: ");
	scanf("%d", &m);
	int Mat[m];
 
	printf("Introduce la cantidad de estudiantes que perdieron Computadora: ");
	scanf("%d", &n);
		int Comp[n];
		
		for(x=1;x<=m;x++){
			printf("\nIngrese el codigo del estudiante numero %d que dejo Matematicas: ", x);
			scanf("%d", &Mat[x]);
		}
		
		for(y=1;y<=n;y++){
			printf("\nIngrese el codigo del estudiante numero %d que dejo Computador: ", y);
			scanf("%d", &Comp[y]);
		}
			for(x=1;x<=m;x++){
		printf("\nEl codigo del estudiante %d que perdio matematicas es: %d",x, Mat[x]);
	}
		for(y=1;y<=n;y++){
			printf("\nIngrese el codigo del estudiante numero %d que dejo Computador: %d", y, Comp[y]);
		}
	goto inicio;
	return 0;
}
