#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main ()

{
	 int a,b,c, d,e,f;
	inicio:
		printf("\n \tNumeros de menor a mayor \n\n");
	printf("Introdusca el primer numero: ");
	scanf("%d", &b);
	printf("Introdusca el segundo numero: ");
	scanf("%d", &c);
	printf("Introdusca el tercer numero: ");
	scanf("%d", &d);
	e=b+c+d;
	f=e*-1;
	for (a=f;a<=e;a++)
	{

	if ((a==b) || (a==c) || (a==d)) printf("%d\n",a);

}
goto inicio;
getch ();
}
