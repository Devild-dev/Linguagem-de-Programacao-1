#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
 int *p;
 int i;
 int qtde;

 printf("Deseja cadastrar quantos elementos ? \n");
 scanf("%d",&qtde);
 
 p = (int *)malloc( qtde * sizeof(int));
 printf("Cadastrando os elementos \n" );
 
 for (i = 0; i < qtde ; i++)
 scanf("%d",&p[i]);

 printf(" \nImprimindo os elementos \n" );
 for (i = 0; i < qtde; i++)
 printf("%d ",p[i]);

 getch();
}
