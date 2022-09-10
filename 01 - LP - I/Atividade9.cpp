#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int num[2];
	
	for(int i=0;i<2;i++){
		printf("Digite o %do numero: ", i+1);
		scanf("%d", &num[i]);
	}
	
	int cont = num[0];
	
	for (int i = num[0];i<=num[1];i++){
		printf("%d ", cont);
		cont++;
	}
	
	
getch();
}
