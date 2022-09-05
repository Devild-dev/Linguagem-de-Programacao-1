#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int somatorio(int *v);

int main(){
	int i, num[10],soma = 0;
		
	for(i=0;i<10;i++){
		printf("Digite o %do numero: ", i+1);
		scanf("%d", &num[i]);
	}
	
	soma = somatorio(num);
	printf("A soma eh : %d", soma);
	
getch();	
}

int somatorio(int *v){
	int i,soma = 0;
	
	for(i=0;i<10;i++){
		soma += v[i];
	}
	return soma;
}
