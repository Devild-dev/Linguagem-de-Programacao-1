#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main(){
 int *p;
 int i;
 int valor = 10;
 int tam = 15;
 
 printf(" Aumentando o numero de elementos ");
 p = (int *)malloc(tam*sizeof(int));
 for(int i=0;i<tam;i++){	
 	*(p+i) = valor;
 	valor += 10;
 }
 
 for (i=0;i<tam;i++)
 printf("%d ",*(p++));
  
 printf("\n");
 printf(" Aumentando o numero de elementos ");
 valor = 10;
 tam = 7;
 p = (int *)malloc(tam*sizeof(int));
 for(int i=0;i<tam;i++){	
 	*(p+i) = valor;
 	valor += 10;
 }

 for (i=0;i<tam;i++)
 printf("%d ",*(p++));
 printf("\n");
 
 getch();
}
