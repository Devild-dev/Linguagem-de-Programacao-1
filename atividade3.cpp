#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

float calculadora(float a, float b, char c);

int main(){
	
	float n, m, resultado;
	char s;
	
	printf("Digite o 1o valor:\n");
	scanf("%f", &n);
	printf("Digite o 2o valor:\n");
	scanf("%f", &m);
	setbuf(stdin,NULL);//limpando o buffer do teclado
	printf("Digite um simbolo valido:\nEx. (+,-,*,/)\n");
	scanf("%c", &s);
	
	resultado = calculadora(n,m,s);
	printf("%.2f", resultado);
	
	getch();
}

float calculadora(float a, float b, char c){
	float resultado;
	
	switch(c){
	case '+':
		resultado = a + b;
		break;
	case '-':
		resultado = a - b;
		break;
	case '*':
		resultado = a * b;
		break;
	case '/':
		resultado = a / b;
		break;
	default:
		return 0.0;
	}	
	return resultado;
}
