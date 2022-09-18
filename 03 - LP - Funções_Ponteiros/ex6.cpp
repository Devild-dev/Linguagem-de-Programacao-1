#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main(){
 int *p;
 int i;
 printf(" Aumentando o numero de elementos ");
 p = (int *)malloc(6*sizeof(int));
 *(p+0) = 10;
 *(p+1) = 20;
 *(p+2) = 30;
 *(p+3) = 40;
 *(p+4) = 50;
 *(p+5) = 60;
 for (i=0;i<6;i++)
 printf("%d ",*(p++));
 printf("\n");
 printf(" Aumentando o numero de elementos ");
 p = (int *)malloc(7*sizeof(int));
 *(p+0) = 10;
 *(p+1) = 20;
 *(p+2) = 30;
 *(p+3) = 40;
 *(p+4) = 50;
 *(p+5) = 60;
 *(p+6) = 70;
 for (i=0;i<7;i++)
 printf("%d ",*(p++));
 printf("\n");
 getch();
}
