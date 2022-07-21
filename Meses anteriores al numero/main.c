#include <stdio.h>  
#include <stdlib.h>
#include <conio.h>


main ()

{
	 int a,b;
	inicio:
	printf("\n \tMeses anteriores \n");
	printf("\n Introdusca un numero: ");
	scanf("%d", &b);
	if (b>12){
    printf("Este valor es invalido\n");
	goto inicio;
	}
	if (b<1){
    printf("Este valor es invalido\n");
	goto inicio;
	}
	for (a=1;a<=12;a++)
	{
	if ((b==a) && (a==1)) printf("Enero, Febrero, Marzo, Abril, Mayo, Junio, Julio, Agosto, Septiembre, Octubre, Noviembre, Diciembre\n");
	if ((b==a) && (a==2)) printf("Enero\n");
	if ((b==a) && (a==3)) printf("Enero, Febrero\n");
	if ((b==a) && (a==4)) printf("Enero, Febrero, Marzo\n");
	if ((b==a) && (a==5)) printf("Enero, Febrero, Marzo, Abril\n");
	if ((b==a) && (a==6)) printf("Enero, Febrero, Marzo, Abril, Mayo\n");
	if ((b==a) && (a==7)) printf("Enero, Febrero, Marzo, Abril, Mayo, Junio\n");
	if ((b==a) && (a==8)) printf("Enero, Febrero, Marzo, Abril, Mayo, Junio, Julio\n");
	if ((b==a) && (a==9)) printf("Enero, Febrero, Marzo, Abril, Mayo, Junio, Julio, Agosto\n");
	if ((b==a) && (a==10)) printf("Enero, Febrero, Marzo, Abril, Mayo, Junio, Julio, Agosto, Septiembre\n");
	if ((b==a) && (a==11)) printf("Enero, Febrero, Marzo, Abril, Mayo, Junio, Julio, Agosto, Septiembre, Octubre\n");
	if ((b==a) && (a==12)) printf("Enero, Febrero, Marzo, Abril, Mayo, Junio, Julio, Agosto, Septiembre, Octubre, Noviembre\n");
}


goto inicio;
getch ();
}
