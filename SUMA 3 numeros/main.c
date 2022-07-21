#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *argv[]) {
int a,b,c,d; 
inicio:
printf("\n \tSUMA\n"); 
printf("introduce numero 1: "); 
scanf("%d",&a); 
printf("introduce numero 2: "); 
scanf("%d",&b); 
printf("introduce numero 3: "); 
scanf("%d",&c); 
d=a+b+c;
if ((a<0)&&(b<0)&(c<0)&&(d<0)) {printf("\t(%d)""+""(%d)""+""(%d)""=""(%d)\n",a,b,c,d);
goto inicio;}
if ((b<0)&&(c<0)&&(d<0)) {printf("\t%d""+""(%d)""+""(%d)""=""(%d)\n",a,b,c,d);
goto inicio;}
if ((b<0)&&(a<0)&&(d<0)) {printf("\t(%d)""+""(%d)""+""%d""=""(%d)\n",a,b,c,d);
goto inicio;}
if ((a<0)&&(c<0)&&(d<0)) {printf("\t(%d)""+""%d""+""(%d)""=""(%d)\n",a,b,c,d);
goto inicio;}
if ((a<0)&&(b<0)) {printf("\t(%d)""+""(%d)""+""%d""=""%d\n",a,b,c,d);
goto inicio;}
if ((a<0)&&(c<0)) {printf("\t(%d)""+""%d""+""(%d)""=""%d\n",a,b,c,d);
goto inicio;}
if ((a<0)&&(d<0)) {printf("\t(%d)""+""%d""+""%d""=""(%d)\n",a,b,c,d);
goto inicio;}
if ((c<0)&&(b<0)) {printf("\t%d""+""(%d)""+""(%d)""=""%d\n",a,b,c,d);
goto inicio;}
if ((d<0)&&(b<0)) {printf("\t%d""+""(%d)""+""%d""=""(%d)\n",a,b,c,d);
goto inicio;}
if ((c<0)&&(d<0)){ printf("\t%d""+""%d""+""(%d)""=""(%d)\n",a,b,c,d);
goto inicio;}
if (a<0) {printf("\t(%d)""+""%d""+""%d""=""%d\n",a,b,c,d);
goto inicio;}
if (b<0) {printf("\t%d""+""(%d)""+""%d""=""%d\n",a,b,c,d);
goto inicio;}
if (c<0) {printf("\t%d""+""%d""+""(%d)""=""%d\n",a,b,c,d);
goto inicio;}
if (d<0) {printf("\t%d""+""%d""+""%d""=""(%d)\n",a,b,c,d);
goto inicio;}
printf("\t%d""+""%d""+""%d""=""%d\n",a,b,c,d);
goto inicio;
	return 0;
}
