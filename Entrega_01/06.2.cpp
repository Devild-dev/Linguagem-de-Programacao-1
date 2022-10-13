#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct contador{
	int cont = 0;
	int resto = 0;	
};

contador contaNotas(int v, int n);

int main(){
	int  vetor[7] = {100,50,20,10,5,2,1};
	contador valor[7];
		
	printf("Digite um valor: ");
	scanf("%d", &valor[0].resto);
	
	for(int i=0;i<7;i++){
		valor[i+1] = contaNotas(valor[i].resto, vetor[i]);
	}
		
	for(int i=0;i<7;i++){
		(valor[i+1].cont > 0) ? printf("Total de notas de %d reais: %d \n", vetor[i], valor[i+1].cont) : printf("");
	}

	getch();
}

contador contaNotas(int v, int n){
	contador c;
	while(v >= n){
		v -= n;
		c.cont++;	
	}
	c.resto = v;		
	return c;
}
