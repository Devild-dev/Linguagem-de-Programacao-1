#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define TAM 2

struct tipoMercadoria{
	char nomeMercadoria[20];
	float valorCompra;
	float valorVenda;
	float lucro;
	float porcentagem;
};

int main(){
	tipoMercadoria mercadorias[TAM];
	int contA, contB, contC;
	contA = contB = contC = 0;
	
	for(int i=0;i<TAM;i++){
		printf("Informe o nome da mercadoria: \n");
		scanf("%s", &mercadorias[i].nomeMercadoria);
		printf("Informe o valor de compra da mercadoria: \n");
		scanf("%f", &mercadorias[i].valorCompra);
		printf("Informe o valor de venda da mercadoria: \n");
		scanf("%f", &mercadorias[i].valorVenda);
		mercadorias[i].lucro = mercadorias[i].valorVenda-mercadorias[i].valorCompra;
	}
	
	for(int i=0;i<TAM;i++){
		mercadorias[i].porcentagem = ((mercadorias[i].lucro)/mercadorias[i].valorCompra);
		if(mercadorias[i].porcentagem < 0.20){
			printf("Menor que 20%%\n");
			contA++;
		}else{
			if(mercadorias[i].porcentagem >= 0.20 && mercadorias[i].porcentagem <= 0.30){
				printf("Maior que 20%% e Menor que 30%%\n");
				contB++;
			}else{
				printf("Maior que 30%%\n");
				contC++;
			}
		}
	}

	printf("%d mercadorias proporcionam lucro abaixo de 20%%\n", contA);
	printf("%d mercadorias proporcionam lucro entre 20%% e 30%%\n", contB);
	printf("%d mercadorias proporcionam lucro acima de 30%\n", contC);

	getch();
}
