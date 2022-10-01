#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct contador{
	int cont = 0;
	int resto = 0;	
};

contador contaNotas(int v, int n);

int main(){
	int valor = 0;
	contador c,d,e,f,g,h,i;
	
	printf("Digite um valor: ");
	scanf("%d", &valor);
	
	c = contaNotas(valor, 100);
	d = contaNotas(c.resto, 50);
	e = contaNotas(d.resto, 20);
	f = contaNotas(e.resto, 10);
	g = contaNotas(f.resto, 5);
	h = contaNotas(g.resto, 2);
	i = contaNotas(h.resto, 1);
	
	printf("Total de notas de 100 reais: %d \n", c.cont);
	printf("Total de notas de 50 reais: %d \n", d.cont);
	printf("Total de notas de 20 reais: %d \n", e.cont);
	printf("Total de notas de 10 reais: %d \n", f.cont);
	printf("Total de notas de 5 reais: %d \n", g.cont);
	printf("Total de notas de 2 reais: %d \n", h.cont);
	printf("Total de notas de 1 real: %d \n", i.cont);
	
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
