#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
 int V[5]={10,20,30,40,50};
 int V2[5]={2,4,8,6,3};
 int *p;
 int i;

 p = V;
 for (i=0;i<5;i++)
 printf("%d ",V[i]);
 printf("\n");
 
 
 for (i=0;i<5;i++)
 printf("%d ",*(p++));
 printf("\n");
 
 p = V2;
 for (i=0;i<5;i++)
 printf("%d ",*(p++));
 
 
 
 getch();
}
