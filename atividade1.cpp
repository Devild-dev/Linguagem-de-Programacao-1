#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

float porcentagem(float s, int n);

int main(){
	float salarioBase, salarioFinal, gratificacao, imposto;
	
	printf("Digite o salario base:\n");
	scanf("%f", &salarioBase);
	
	gratificacao = porcentagem(salarioBase, 5);
	imposto = porcentagem(salarioBase, 7);
	
	salarioFinal = salarioBase + gratificacao - imposto;
	
	printf("O salario final eh R$%.2f", salarioFinal);
	
	getch();
}

float porcentagem(float s, int n){
	int p;
	p = s*n/100;
	return p;
}
