#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define TAM 10

int fatorialCalc(int num);
void fibonacci(int *v);

int main(){
	int vetor1[TAM], vetor2[TAM], fat = 0, num = 0;
	
	for(int i=0;i<TAM;i++){
		fat = fatorialCalc(num);
		vetor1[i] = fat;
		num++;
	}
	
	fibonacci(vetor2);
	
	void fibonacci(int *v);
	printf("vetor1:");
	for(int i=0;i<TAM;i++){
		printf(" %.2d", vetor1[i]);
	}
	
	printf("\nvetor2:");
	for(int i=0;i<TAM;i++){
		printf(" %.2d", vetor2[i]);
	}		
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

void fibonacci(int *v){	
	for(int i=0;i<TAM;i++){
	   if(i == 0 || i == 1){
	   	v[i] = 1;
	   }else{
	   	 v[i] = v[i-1]+v[i-2];
	   }
	}	
}
