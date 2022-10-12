#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define TAM 10

void fibonacci(int *v);

int main(){
	int vetor2[TAM], fat = 0;

	fibonacci(vetor2);
	
	printf("vetor2:");
	for(int i=0;i<TAM;i++){
		printf(" %.2d", vetor2[i]);
	}
		
	getch();
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
