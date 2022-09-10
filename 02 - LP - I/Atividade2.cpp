#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define TAM 10

int main(){
	int num[TAM], check = 0;
	
	for(int i=0;i<TAM;i++){
		printf("Digite o %do numero:\n", i+1);
		scanf("%d", &num[i]);
	}
	
	printf("\n\nDigite um outro valor:\n");
	scanf("%d", &check);
	
	for(int i=0;i<TAM;i++){
		num[i];	
		if(num[i] == check){
			printf("Este numero pertence ao vetor!");
			goto fim;
		}else{
			printf("Este numero nao pertente ao vetor!");
			goto fim;
		}	
	}fim:
	
	getch();
}
