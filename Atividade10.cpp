#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#define TAM 100000

int main(){
	int num[TAM], numP[TAM], numN[TAM], cont, contPos, contNeg, somaP, somaN;
	cont = contPos = contNeg = somaP = somaN = 0;
	
	for(int i = 0;i<TAM;i++){
		printf("Digite o %do numero:", i+1);
		scanf("%d", &num[i]);
	
		if(num[i]>0){
			numP[contPos] = num[i];
			somaP += numP[contPos];
			contPos++;
		}else{
			if(num[i]<0){
				numN[contNeg] = num[i];
				somaN += numN[contNeg];
				contNeg++;
			}else{
				getch();
				system("cls");
			}	
		}
		if(num[i] == 0){
			i = TAM-1;	
		}else{
			cont++;	
		}	
	} 
	printf("Numero Digitados: ");
	for(int i=0;i<cont;i++){
		printf("%d ", num[i]);
	}
	printf("\nNumero Positivos Digitados: ");	
	for(int i=0;i<contPos;i++){
		printf("%d ", numP[i]);
	}
	printf("\nNumero Negativos Digitados: ");
	for(int i=0;i<contNeg;i++){
		printf("%d ", numN[i]);
	}
	
	printf("\n\nTotal de Numeros: %d\n", cont);
	printf("Total de Numeros Positivos: %d\n", contPos);
	printf("Total de Numeros Negativos: %d\n", contNeg);
	printf("A soma dos numeros positivos eh igual a %d\n", somaP);
	printf("A soma dos numeros negativos eh igual a %d\n", somaN);
	
	getch();
}
