#include <stdio.h>
#include <stdlib.h>



main() 
{
	 int a,b,c;
	inicio:
	printf("Introdusca el primer numero: ");
	scanf("%d", &a);
	printf("Introdusca el segundo numero: ");
	scanf("%d", &b);
	
	if (a<b){
		printf("%d\n",a);
		printf("%d\n", b);
		
	} else
	{
	printf("%d\n",b);
		printf("%d\n", a);
		
	}
	goto inicio;
	getch ();
	return 0;

}
