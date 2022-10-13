#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int tamanho(int n);//função para identificar o tamanho do número binário
void vetorBin(int *vb, int t, int n);//função para vetorizar o número binário
int expDec(int t);//calcular o exponecial baseado no tamanho
int conversorDectoBin(int *v, int t,int e);//transforma o vetor em um numero binario

int main(){
	int num, tam;
	num = tam = 0;
	
	printf("Digite um numero Decimal: \n");
	scanf("%d", &num);
	
	while(num<0){		
		printf("Numero nao natural!!!\nDigite um numero inteiro positivo: \n");
		scanf("%d", &num);				
	}
	
	tam = tamanho(num);	
	int v[tam];	
	
	vetorBin(v, tam, num);
	int exp = expDec(tam);
	int result = conversorDectoBin(v, tam,exp);
	
	printf("Decimal = %d | Binario = %d", num, result);
	getch();
}

int tamanho(int n){	
	int t = 0;
	while(n > 0){
		n/= 2;
		t++;
	}	
return t;	
}

void vetorBin(int *vb, int t, int n){
	for(int i=0;i<t;i++){
		vb[i] = n%2;
		n /= 2;
	}
}

int expDec(int t){
	int e = pow(10,t-1);
	return e;
}

int conversorDectoBin(int *v, int t,int e){
	int r=0;	
	for(int i = t-1;i>=0;i--){
		r += (v[i]*e);
		e/=10;
	}
	return r;
}
