#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int cont = 10;
int *pt;

int main(){
 pt = &cont;
 printf("cont = %d; pt = %d ; endereco de (cont,pt) = (%d,%d) \n", cont, *pt, &cont, pt);
 
 *pt = 12;
 printf("cont = %d; pt = %d ; endereco de (cont,pt) = (%d,%d) \n", cont, *pt, &cont, pt);
 
 pt++;//avançado o ponteiro na memória
 pt++;//avançando o ponteio na memória
 printf("cont = %d; pt = %d ; endereco de (cont,pt) = (%d,%d) \n", cont, *pt, &cont, pt);
 
 pt--;
 printf("cont = %d; pt = %d ; endereco de (cont,pt) = (%d,%d) \n", cont, *pt, &cont, pt);
 
 getch();
}
