#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define TAM 3

float mediaPonderada(float num[]);

int main(){
	float num[TAM], mediaP = 0.0; 	
	int i=0;	
		
	while(i < TAM){	
		printf("Digite o %do valor:\n", i+1);
		scanf("%f", &num[i]);		
		if(num[i]>=0.0 && num[i]<=10.0){
			i++;
		}else{
			printf("***Valor invalido, Insira um valor entre 0 e 10!***\n\n");
		}		
	}
	
	mediaP = mediaPonderada(num);	
	printf("A media ponderada eh %.2f", mediaP);	
	getch();
}

float mediaPonderada(float num[]){
	float mediaPond, var;
	int contA,contB;
		
	mediaPond = var = 0.0;
	contA = contB = 0;
	
	for(int i=0;i<TAM;i++){
		if(num[i]<=6){
			var += num[i]*2.5;
			contA++;
		}else{
			var += num[i]*5.0;
			contB++;
		}
	}	
	mediaPond = var/((contA*2.5)+(contB*5.0));	
	return mediaPond;
}
