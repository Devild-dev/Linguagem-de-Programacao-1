#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define TAM 30

int checkPalindromo(char *p);

int main(){
	char palavra[TAM];
	int flag;
	flag = 0;
	
	printf("Digite a palavra: \n");
	scanf("%s", palavra);

	flag = checkPalindromo(palavra);
			
	if(flag == 1){
		printf("Nao eh Palindromo");
	}else{
		printf("Eh Palindromo");
	}	
	getch();
}

int checkPalindromo(char *p){
	char c[TAM];
	int f, j, tam;
    f = 0, tam = strlen(p);
	j = tam-1;
	
	for(int i=0; i<tam; i++){	
		c[j] = p[i];
		j--;
	}
	
	for(int i=0;i<tam;i++){
		if (p[i] != c[i])
			f = 1;
	}	
	return f;
}
