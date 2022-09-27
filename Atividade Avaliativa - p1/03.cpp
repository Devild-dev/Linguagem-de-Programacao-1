#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void numeroPerfeito(int num);

int main(){
	int num;
	num = 0;
	
	printf("Digite um numero:\n");
	scanf("%d", &num);
	
	while(num <= 0){
		if(num <= 0){
			printf("Numero invalido, insira um numero inteiro positivo!:");
			getch();
			system("cls");			
		}
	printf("Digite um numero:\n");
	scanf("%d", &num);			
	}	
	
	numeroPerfeito(num);		
	
	getch();
}

void numeroPerfeito(int num){
	int cont, check;
	check = 0;
	cont = num;		
	for(int i=0;i<num-1;i++){
		  cont--;		  
		  if(num % cont == 0)
		  	check += cont;
	}		
	if(check == num){
		printf("O numero %d eh perfeito!", num);
	}else{
		printf("O numero %d nao eh perfeito!", num);
	}	
}

