#include <stdio.h>  
#include <stdlib.h>
#include <conio.h>


main ()

{

	 int a,b,c;
	inicio:
	printf("\n \tMes en letra \n");
	printf("\nIntrodusca el primer numero: ");
	scanf("%d", &b);
	printf("Introdusca el segundo numero: ");
	scanf("%d", &c);
	if (((b<0)||(c<0)||((b>12)||(c>12)))){
	printf("\nLos Numeros deben ser mayores que 0 y menores que 12\nEntre 1 y 12\n\n");
	goto inicio;}
	for (a=1;a<=12;a++)
	{
	if ((b==a) && (a==1)) printf("Enero\n");
	if ((c==a) && (a==1)) printf("Enero\n");
	if ((b==a) && (a==2)) printf("Febrero\n");
	if ((c==a) && (a==2)) printf("Febrero\n");
	if ((b==a) && (a==3)) printf("Marzo\n");
	if ((c==a) && (a==3)) printf("Marzo\n");
	if ((b==a) && (a==4)) printf("Abril\n");
	if ((c==a) && (a==4)) printf("Abril\n");
	if ((b==a) && (a==5)) printf("Mayo\n");
	if ((c==a) && (a==5)) printf("Mayo\n");
	if ((b==a) && (a==6)) printf("Junio\n");
	if ((c==a) && (a==6)) printf("Junio\n");
	if ((b==a) && (a==7)) printf("Julio\n");
	if ((c==a) && (a==7)) printf("Julio\n");
	if ((b==a) && (a==8)) printf("Agosto\n");
	if ((c==a) && (a==8)) printf("Agosto\n");
	if ((b==a) && (a==9)) printf("Septiembre\n");
	if ((c==a) && (a==9)) printf("Septiembre\n");
	if ((b==a) && (a==10)) printf("Octubre\n");
	if ((c==a) && (a==10)) printf("Octubre\n");
	if ((b==a) && (a==11)) printf("Noviembre\n");
	if ((c==a) && (a==11)) printf("Noviembre\n");
	if ((b==a) && (a==12)) printf("Diciembre\n");
	if ((c==a) && (a==12)) printf("Diciembre\n");	

}


goto inicio;
getch ();
}
