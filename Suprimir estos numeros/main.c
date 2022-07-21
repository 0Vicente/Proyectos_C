#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


main ()

{

	 int a,b,c, d;
	inicio:
	printf("\t\nSuprimir estos numeros\n\n");
	printf("Introdusca el primer numero: ");
	scanf("%d", &b);
	printf("Introdusca el segundo numero: ");
	scanf("%d", &c);
	printf("Introdusca el tercer numero: ");
	scanf("%d", &d);
	if (((b<0)||(c<0)||(d<0))&&((b>20)||(c>20)||(d>20))){
	printf("\nLos Numeros deben ser mayores que 0 y menores que 20\nEntre 1 y 20\n\n");
	goto inicio;}
	if ((b<0)||(c<0)||(d<0)){
	printf("\nLos Numeros deben ser mayores que 0\nEntre 1 y 20\n\n");
	goto inicio;}
	if ((b>20)||(c>20)||(d>20)){
	printf("\nLos Numeros deben ser menores que 20\nEntre 1 y 20\n\n");
	goto inicio;}
	for (a=1;a<=20;a++){
	if ((a!=b) && (a!=c) && (a!=d)) printf("%d\n",a);}
goto inicio;
getch ();
}
