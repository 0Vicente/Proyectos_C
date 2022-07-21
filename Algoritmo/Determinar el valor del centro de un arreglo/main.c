#include <conio.h>
#include <stdio.h>

int main()
{
	int a,b,c,s;
	inicio:
		printf("\n\n\t El valor del centro del arreglo\n\n");
	printf("Introduce el numero: ");
	scanf("%d", &a);
	int SUM[a];
	b=a/2;
	c=b+1;
	
		for (s=1;s<=a;s++){
	printf("\nIntroduce el valor de la posicion %d:", s);
	scanf("%d", &SUM[s]);
}
	if (a/2%2!=0) printf("El numero de indices es par por lo cual se toma el numero entero mas proximo y ese numero es %d", c);
  printf("\nEl indice del centro es %d y su valor es %d\n", c, SUM[c]);
  

goto inicio;
getch();
    return 0;
}

