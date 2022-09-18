#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
main()
{
 int *p;
 int i;
 int qtde;
 
 free(p);	
 printf("Deseja cadastrar quantos elementos? \n");
 scanf("%d",&qtde);
 
 
 p = (int *)malloc(qtde * sizeof(int));
 printf("cadastrando os elementos \n" );
 
 for (i = 0; i < qtde ; i++)
 scanf("%d",&p[i]);

 printf(" \n imprimindo os elementos \n" );
 for (i = 0; i < qtde; i++)
 printf("%d ",p[i]);

 printf(" \n Adicionando um novo elemento = 999 \n" );
 qtde++;
 p = (int *)realloc( p, qtde * sizeof(int));
 p[qtde-1] = 999;
 printf(" \n imprimindo os elementos \n" );
 for (i = 0; i < qtde; i++)
 printf("%d ",p[i]);


getch();
}
