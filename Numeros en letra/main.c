#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main (){
	 int a,b,c,d;
	inicio:
	printf("\tNumeros en letra\n\n");
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
	if ((b==a) && (a==1)) printf("Uno\n");
	if ((c==a) && (a==1)) printf("Uno\n");
	if ((d==a) && (a==1)) printf("Uno\n");
	if ((b==a) && (a==2)) printf("Dos\n");
	if ((c==a) && (a==2)) printf("Dos\n");
	if ((d==a) && (a==2)) printf("Dos\n");
	if ((b==a) && (a==3)) printf("Tres\n");
	if ((c==a) && (a==3)) printf("Tres\n");
	if ((d==a) && (a==3)) printf("Tres\n");
	if ((b==a) && (a==4)) printf("Cuatro\n");
	if ((c==a) && (a==4)) printf("Cuatro\n");
	if ((d==a) && (a==4)) printf("Cuatro\n");
	if ((b==a) && (a==5)) printf("Cinco\n");
	if ((c==a) && (a==5)) printf("Cinco\n");
	if ((d==a) && (a==5)) printf("Cinco\n");
	if ((b==a) && (a==6)) printf("Seis\n");
	if ((c==a) && (a==6)) printf("Seis\n");
	if ((d==a) && (a==6)) printf("Seis\n");
	if ((b==a) && (a==7)) printf("Siete\n");
	if ((c==a) && (a==7)) printf("Siete\n");
	if ((d==a) && (a==7)) printf("Siete\n");
	if ((b==a) && (a==8)) printf("Ocho\n");
	if ((c==a) && (a==8)) printf("Ocho\n");
	if ((d==a) && (a==8)) printf("Ocho\n");
	if ((b==a) && (a==9)) printf("Nueve\n");
	if ((c==a) && (a==9)) printf("Nueve\n");
	if ((d==a) && (a==9)) printf("Nueve\n");
	if ((b==a) && (a==10)) printf("Diez\n");
	if ((c==a) && (a==10)) printf("Diez\n");
	if ((d==a) && (a==10)) printf("Diez\n");
	if ((b==a) && (a==11)) printf("Once\n");
	if ((c==a) && (a==11)) printf("Once\n");
	if ((d==a) && (a==11)) printf("Once\n");
	if ((b==a) && (a==12)) printf("Doce\n");
	if ((c==a) && (a==12)) printf("Doce\n");
	if ((d==a) && (a==12)) printf("Doce\n");
	if ((b==a) && (a==13)) printf("Trece\n");
	if ((c==a) && (a==13)) printf("Trece\n");
	if ((d==a) && (a==13)) printf("Trece\n");
	if ((b==a) && (a==14)) printf("Catorce\n");
	if ((c==a) && (a==14)) printf("Catorce\n");
	if ((d==a) && (a==14)) printf("Catorce\n");
	if ((b==a) && (a==15)) printf("Quince\n");
	if ((c==a) && (a==15)) printf("Quince\n");
	if ((d==a) && (a==15)) printf("Quince\n");
	if ((b==a) && (a==16)) printf("Diesiseis\n");
	if ((c==a) && (a==16)) printf("Diesiseis\n");
	if ((d==a) && (a==16)) printf("Diesiseis\n");
	if ((b==a) && (a==17)) printf("Diesisiete\n");
	if ((c==a) && (a==17)) printf("Diesisiete\n");
	if ((d==a) && (a==17)) printf("Diesisiete\n");
	if ((b==a) && (a==18)) printf("Diesiocho\n");
	if ((c==a) && (a==18)) printf("Diesiocho\n");
	if ((d==a) && (a==18)) printf("Diesiocho\n");
	if ((b==a) && (a==19)) printf("Diesinueve\n");
	if ((c==a) && (a==19)) printf("Diesinueve\n");
	if ((d==a) && (a==19)) printf("Diesinueve\n");
	if ((b==a) && (a==20)) printf("Veinte\n");
	if ((c==a) && (a==20)) printf("Veinte\n");
	if ((d==a) && (a==20)) printf("Veinte\n");
	if ((a!=b) && (a!=c)) printf("%d\n",a);
}
goto inicio;
getch ();
}
