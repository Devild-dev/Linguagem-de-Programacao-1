#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int tamanho(int n);//função para identificar o tamanho do número binário
void vetorBin(int *vb, int t, int n);//função para vetorizar o número binário
int conversorBintoDec(int *v, int t);//função para converter o número binário em decimal

int main(){
	int num, tam;
	num = tam = 0;
	
	printf("Digite um numero binario: \n");
	scanf("%d", &num);
	
	while(num%10 != 0 && num%10 != 1){		
		printf("num modulo 10: %d\n", num%10);
		printf("Numero nao binario!!!\nDigite um numero binario: \n");
		scanf("%d", &num);				
	}
	
	tam = tamanho(num);
	int v[tam];
	
	vetorBin(v, tam, num);
	int result = conversorBintoDec(v,tam);
	
	printf("Binario = %d | Decimal = %d", num, result);
	getch();
}

int tamanho(int n){	
	int t = 0;
	while(n > 0){
		n/= 10;
		t++;
	}	
return t;	
}

void vetorBin(int *vb, int t, int n){
	for(int i=0;i<t;i++){
		vb[i] = n%10;
		n /= 10;
	}
}

int conversorBintoDec(int *v, int t){
	int p,r;
	p=r=0;
	for(int i=0;i<t;i++){		
		p = pow(2,i);
		r += v[i]*p;	
	}
	return r;	
}
