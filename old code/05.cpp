#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	float massaInicial, massaFinal;
	int tempo, hora, min, seg;
	massaInicial = 0.0;
	hora = min = seg = tempo=0;
	
	printf("Digite o peso da massa inicial:\n");
	scanf("%f", &massaInicial);
	
	massaFinal = massaInicial;
	
	do{
		tempo += 50;
		massaFinal /= 2;	
	}while(massaFinal > 0.5);
	
	printf("Massa final = %.2f \n", massaFinal);
	printf("Tempo = %ds \n", tempo);
	
	int aux = tempo;
	for(int i=0;i<tempo;i++){	
		if(aux % 60 == 0){
			min++;
		}
		if(aux % 3600 == 0){
			hora++;
		}	
		aux--;
	}
	seg = tempo%60;
	printf("Tempo = %d:%d:%d", hora, min, seg); 
	
	getch();
}
