#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#define TAM 100000

int main(){
	float nota[TAM], soma;
	int cont = 0;
		
		for(int i=0;i<TAM;i++){
			printf("Digite a %da nota: ", i+1);
			scanf("%f", &nota[i]);
			
		if(nota[i]>=0.0){
			soma += nota[i];
			cont++;
		}else{
			if(nota[i] == -1){
				i = TAM-1;		
			}
		}	
	}
	
	float media = soma/cont;
	printf("A media eh : %.2f", media);
}
	
