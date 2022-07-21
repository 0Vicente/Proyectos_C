#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


main ()

{
	system ("color 01");
	 int a,b,c;
	 char s;
	inicio:
	printf("Introdusca el primer numero: ");
	scanf("%d", &b);
	printf("Introdusca el segundo numero: ");
	scanf("%d", &c);
	for (a=1;a<=10;a++)
	{
	if ((b==a) && (a==1)) printf("Uno\n");
	if ((c==a) && (a==1)) printf("Uno\n");
	if ((b==a) && (a==2)) printf("Dos\n");
	if ((c==a) && (a==2)) printf("Dos\n");
	if ((b==a) && (a==3)) printf("Tres\n");
	if ((c==a) && (a==3)) printf("Tres\n");
	if ((b==a) && (a==4)) printf("Cuatro\n");
	if ((c==a) && (a==4)) printf("Cuatro\n");
	if ((b==a) && (a==5)) printf("Cinco\n");
	if ((c==a) && (a==5)) printf("Cinco\n");
	if ((b==a) && (a==6)) printf("Seis\n");
	if ((c==a) && (a==6)) printf("Seis\n");
	if ((b==a) && (a==7)) printf("Siete\n");
	if ((c==a) && (a==7)) printf("Siete\n");
	if ((b==a) && (a==8)) printf("Ocho\n");
	if ((c==a) && (a==8)) printf("Ocho\n");
	if ((b==a) && (a==9)) printf("Nueve\n");
	if ((c==a) && (a==9)) printf("Nueve\n");
	if ((b==a) && (a==10)) printf("Diez\n");
	if ((c==a) && (a==10)) printf("Diez\n");
	
	
	if ((a!=b) && (a!=c)) printf("%d\n",a);

}


goto inicio;
getch ();
}
