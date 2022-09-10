#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

float mediaPond(float *n);

int main(){
	float notas[3], resultado;
	
	for(int i = 0; i<3;i++){
		printf("Digite a %da nota:\n", i+1);
		scanf("%f", &notas[i]);
	}	
	
	resultado = mediaPond(notas);
	
	printf("A MEDIA FINAL DO ALUNO FOI %.2f\n", resultado);
	
	if(resultado >= 7.0){
		printf("APROVADO");
	}else{
		if(resultado >= 5.0){
				printf("RECUPERACAO");
			}else{
				printf("REPROVADO");
			}
	}	
getch();
}

float mediaPond(float *n){
	float resultado;
	for(int i=0;i<3;i++){
		if(i==0){
			resultado += n[i]*2;
		}else{
			resultado += n[i]*4;
		}
	}
	resultado /= 10;
	return resultado;	
}

