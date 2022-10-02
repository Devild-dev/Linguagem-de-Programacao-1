#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define TAM 3

struct tipoMercadoria{
	char nomeMercadoria[20];
	float valorCompra;
	float valorVenda;
	float lucro;
	float porcentagem;
};

float lucroMerc(tipoMercadoria m);
float porcentagemMerc(tipoMercadoria m);

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
			
		mercadorias[i].lucro = lucroMerc(mercadorias[i]);	
		mercadorias[i].porcentagem = porcentagemMerc(mercadorias[i]);
	}
	
	for(int i=0;i<TAM;i++){
		if(mercadorias[i].porcentagem < 0.20){
			contA++;
		}else{
			if(mercadorias[i].porcentagem >= 0.20 && mercadorias[i].porcentagem <= 0.30){
				contB++;
			}else{
				contC++;
			}
		}
	}

	contA > 0 ? printf("%d mercadoria(s) proporcionam lucro abaixo de 20%%\n", contA) : printf("");
	contB > 0 ? printf("%d mercadorias proporcionam lucro entre 20%% e 30%%\n", contB) : printf("");
	contC > 0 ? printf("%d mercadorias proporcionam lucro acima de 30%\n", contC) : printf("");

	getch();
}

float lucroMerc(tipoMercadoria m){
	m.lucro = m.valorVenda-m.valorCompra;	
	return m.lucro;
}

float porcentagemMerc(tipoMercadoria m){	
	m.porcentagem = ((m.lucro)/m.valorCompra);
	return m.porcentagem;
}
