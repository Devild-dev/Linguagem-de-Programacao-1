#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int cont = 10;
int *pt ;
int num = 0;

int main(){
	pt = &num;
	printf(" cont = %d; pt = %d; endereco de (cont,pt) = (%d,%d) \n", cont, *pt, &cont, pt);
	
	pt = &cont;
	
	printf(" cont = %d; pt = %d; endereco de (cont,pt) = (%d,%d) \n", cont, *pt, &cont, pt);
	
	*pt = 12;
	num = *pt;
	
	printf(" cont = %d; pt = %d; endereco de (cont,pt) = (%d,%d) \n", cont, *pt, &cont, pt);

	printf(" cont = %d; pt = %d; endereco de (cont,pt) = (%d,%d) \n", cont, *pt, &cont, pt);
	printf(" num = %d no endereco = %d \n", num, &num);
	
	getch();
}
