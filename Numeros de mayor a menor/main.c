#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main ()

{
 int a,b,c, d;
inicio:
printf("\n \tNumeros de mayor a menor \n\n");
printf("Introdusca el primer numero: ");
scanf("%d", &b);
printf("Introdusca el segundo numero: ");
scanf("%d", &c);
printf("Introdusca el tercer numero: ");
scanf("%d", &d);
for (a=1000000;a>=-1000000;a--)
{

if ((a==b) || (a==c) || (a==d)) printf("%d\n",a);

}
goto inicio;
getch ();
}

