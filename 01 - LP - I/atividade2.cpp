#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void checkPI(int n){
	if(n % 2 == 0){
		printf("Numero par!\n");
	}else{
		printf("Numero impar!\n");
	}
}

int main(){
	int n;
	int check;
	
	do{
		printf("Digite um numero positivo maior que zero:\n");
		scanf("%d", &n);
		if(n <= 0){
			printf("Valor Invalido!!!");
			getch();	
		}
		system("cls");
	}while(n <= 0);
	
	checkPI(n);
	
	getch();
}
