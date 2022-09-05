#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int num[3];
	
	for(int i = 0; i<3;i++){
		printf("Digite o %da numero:\n", i+1);
		scanf("%d", &num[i]);
	}	
	
	if(num[0] == num[1] && num[1] == num[2]){
		printf("Os 3 numeros sao iguais!");
	}else{
		if (num[0] < num[1] && num[0] < num[2]){
			printf("%d eh o menor numero!", num[0]);
		}else{
		if(num[1] < num[2]){
			printf("%d eh o menor numero!", num[1]);
		}else{
			printf("%d eh o menor numero!", num[2]);
			}
		}
	}
		
	
	getch();
}
