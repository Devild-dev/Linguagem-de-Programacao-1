#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define TAM 10

int main(){
	float notas[TAM], media, soma;
	int cont = 0;
	
	for(int i=0;i<TAM;i++){
		printf("Digite a %da nota:\n", i+1);
		scanf("%f", &notas[i]);
		
		if(notas[i]< 0 || notas[i] >10){
			printf("Nota Invalida!!!\n");
			i--;
			getch();					
		}else{
			soma += notas[i];
		}	
	}

	media = soma/TAM;
	
	for(int i=0;i<TAM;i++){
		notas[i];
		if(notas[i]>media){
			cont++;
		}
	}
	
	printf("Media = %.2f\n", media);
	printf("Quantidade de numeros acima da media = %.2d", cont);
	
	getch();
}
