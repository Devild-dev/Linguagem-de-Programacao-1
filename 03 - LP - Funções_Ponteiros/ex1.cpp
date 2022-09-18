#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


float x = 10.2;
float *pt;
	

int main(){
	pt = &x;
	
	printf(" x = %.1f\n", x);
	printf(" Valor x pelo ponteiro = %.1f\n", *pt);
	getch();
	system("cls");
	
	*pt = 11.4;
	printf(" x = %.1f\n", x);
	printf(" Valor x pelo ponteiro = %.1f\n", *pt);
	getch();
	system("cls");
	
	printf("Endereco de x = %d\n", &x);
	printf("Endereco de x pelo ponteiro = %d\n", pt);
	
	getch();
}
