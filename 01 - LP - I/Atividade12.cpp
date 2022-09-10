#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#define TAM 100000

int main(){
	float nota[TAM], soma, notaMaior = 0.0, notaMenor = 0.0;
	int cont = 0;
		
		for(int i=0;i<TAM;i++){
			printf("Digite a %da nota: ", i+1);
			scanf("%f", &nota[i]);
			
		if(nota[i]>=0.0){
			soma += nota[i];
			
			if(nota[i] > notaMaior){
				notaMaior = nota[i];
			}
			if(i == 0){
				notaMenor = nota[i];
			}
			
			if(nota[i] < notaMenor){
				notaMenor = nota[i];
			}
			cont++;
		}else{
			if(nota[i] == -1){
				i = TAM-1;		
			}
		}	
	}
	
	float media = soma/cont;
	printf("A media eh : %.2f", media);
	printf("\nA maior nota eh : %.2f", notaMaior);
	printf("\nA menor nota eh : %.2f", notaMenor);
}

