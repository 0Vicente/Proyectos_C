#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>



	int main(int argc, char *argv[]) {
char  a[25],b[25],c[25]; 
inicio:
printf("\t\n Comparacion \n\n"); 
printf("Introduzca el nombre 1: "); 
scanf("%s",&a); 
printf("Introduzca el nombre 2: "); 
scanf("%s",&b); 
printf("Introduzca el nombre 3: "); 
scanf("%s",&c);

if ((strcmp(a,b)==0)&&(strcmp(b,c)==0)){
 printf("\nLos tres nombres son iguales\nHay 3 repeticiones\n");
goto inicio;
}
if (strcmp(a,b)==0) printf("\nLa primer y el segundo nombre son iguales\nHay 2 repeticiones\n");
if (strcmp(a,c)==0) printf("\nEl primer y el tercer nombre son iguales\nHay 2 repeticiones\n");
if (strcmp(c,b)==0) printf("\nEl segundo y el tercer nombre son iguales\nHay 2 repeticiones\n");
if ((strcmp(a,b)!=0)&&(strcmp(c,b)!=0)&&(strcmp(a,c)!=0)) printf("\nTodos los nombres son diferentes\nNo hay repeticiones\n");
goto inicio;	 	
getch();
	return 0;
}

