#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int fatorialCalc(int num);

int main(){
	int num, fatorialNum;
	num = fatorialNum = 0;
	
	printf("Digite um numero:\n");
	scanf("%d", &num);
	
	while(num < 0){		
		if(num < 0){
			printf("Numero invalido, digite um numero maior ou igual a 0");
			getch();
			system("cls");
		}
		printf("Digite um numero novamente:\n");
		scanf("%d", &num);
	}	
	
	fatorialNum = fatorialCalc(num);	
	
	printf("O fatorial do numero %d! eh %d", num, fatorialNum);
		
	getch();
}

int fatorialCalc(int num){
	int aux, fatorial;
	aux = fatorial = 0;	
	if(num == 0){
		fatorial = aux = 1;
	}else{
		fatorial = aux = num;
	}	
	for(int i=1; i<num;i++){
		aux--;
		fatorial *= aux;		
	}	
	return fatorial;
}
