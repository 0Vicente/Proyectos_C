#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main ()

{
	 int b,c;
	 char a[50];
	inicio:
	c=0; //sin esto la variable tomas los datos de lo que tenia anterior
	printf("\n \tCantidad de letras A en el nombre \n \n");
	printf("Introdusca el nombre: ");
	scanf("%s", &a);

	for (b=0;b<=strlen(a);b++){
	if (a[b]=='0'){ printf("'ERROR' Se detecto algun numero en este nombre\n");
	goto inicio;}
	if (a[b]=='1'){ printf("'ERROR' Se detecto algun numero en este nombre\n");
	goto inicio;}
	if (a[b]=='2'){ printf("'ERROR' Se detecto algun numero en este nombre\n");
	goto inicio;}
	if (a[b]=='3'){ printf("'ERROR' Se detecto algun numero en este nombre\n");
	goto inicio;}
	if (a[b]=='4'){ printf("'ERROR' Se detecto algun numero en este nombre\n");
	goto inicio;}
	if (a[b]=='5'){ printf("'ERROR' Se detecto algun numero en este nombre\n");
	goto inicio;}
	if (a[b]=='6'){ printf("'ERROR' Se detecto algun numero en este nombre\n");
	goto inicio;}
	if (a[b]=='7'){ printf("'ERROR' Se detecto algun numero en este nombre\n");
	goto inicio;}
	if (a[b]=='8'){ printf("'ERROR' Se detecto algun numero en este nombre\n");
	goto inicio;}
	if (a[b]=='9'){ printf("'ERROR' Se detecto algun numero en este nombre\n");
	goto inicio;}
	
	if ((a[b]=='a') || (a[b]=='A')){ // Debe especificarse mayuscula y minuscula
	
	c++;
}
}
printf("La cantidad de aes en este nombre es: ""%d\n",c);
goto inicio;	
getch();
return 0;
}
