#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//Ordenação utilizando bubblesort 

int main(){
	int n, aux, cont;
	
	printf("Digite o valor de n:\n");
	scanf("%d", &n);
	
	int num[n];
	printf("-----------------------------\n");
	for(int i=0;i<n;i++){
		printf("Digite o %do numero:\n", i+1);
		scanf("%d", &num[i]);
	}
	
	printf("Numeros do vetor:");
	for(int i=0;i<n;i++){
		printf("%2d", num[i]);
	}
	for(cont=1;cont<n;cont++){
		for(int i=0;i<n-1;i++){
			if(num[i]<num[i+1]){
				aux = num[i];
				num[i] = num[i+1];
				num[i+1] = aux;
			}
		}
	}
	printf("\nNumeros do vetor ordenados:");
	for(int i=0;i<n;i++){
		printf("%2d", num[i]);
	}
	
	getch();
}
