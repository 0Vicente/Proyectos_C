#include <stdio.h>  
#include <stdlib.h>
#include <conio.h>


main ()

{
	 int a,b;
	inicio:
	printf("\n \tMeses siguientes al numero \n");
	printf("\n Introdusca un numero: ");
	scanf("%d", &b);
	if ((b<1)||(b>12)){
	printf("\nLos Numeros deben ser mayores que 0 y menores que 12\nEntre 1 y 12\n\n");
	goto inicio;}
	
	for (a=1;a<=12;a++)
	{
	if ((b==a) && (a==1)) printf("Febrero, Marzo, Abril, Mayo, Junio, Julio, Agosto, Septiembre, Octubre, Noviembre, Diciembre\n");
	if ((b==a) && (a==2)) printf("Marzo, Abril, Mayo, Junio, Julio, Agosto, Septiembre, Octubre, Noviembre, Diciembre\n");
	if ((b==a) && (a==3)) printf("Abril, Mayo, Junio, Julio, Agosto, Septiembre, Octubre, Noviembre, Diciembre\n");
	if ((b==a) && (a==4)) printf("Mayo, Junio, Julio, Agosto, Septiembre, Octubre, Noviembre, Diciembre\n");
	if ((b==a) && (a==5)) printf("Junio, Julio, Agosto, Septiembre, Octubre, Noviembre, Diciembre\n");
	if ((b==a) && (a==6)) printf("Julio, Agosto, Septiembre, Octubre, Noviembre, Diciembre\n");
	if ((b==a) && (a==7)) printf("Agosto, Septiembre, Octubre, Noviembre, Diciembre\n");
	if ((b==a) && (a==8)) printf("Septiembre, Octubre, Noviembre, Diciembre\n");
	if ((b==a) && (a==9)) printf("Octubre, Noviembre, Diciembre\n");
	if ((b==a) && (a==10)) printf("Noviembre, Diciembre\n");
	if ((b==a) && (a==11)) printf("Diciembre\n");
	if ((b==a) && (a==12)) printf("Enero, Febrero, Marzo, Abril, Mayo, Junio, Julio, Agosto, Septiembre, Octubre, Noviembre, Diciembre\n");

}


goto inicio;
getch ();
}
