#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#define TAM 5

int main(){
	int v[TAM];// cria vetor com 5 posições
	int num, meio, cont, l, c, i,random; // declaração das variáveis necessárias
	cont = 1;//inicializa o contador
	i = 0;//inicializa a variavel que vai correr o vetor
	
	printf("Digite um valor impar:\n");//entrada dos números ímpares
	scanf("%d", &v[i]);
	
	while(i<TAM-1){//controle de entrada de dados, para inserir apenas números ímpares
		if(v[i]%2 !=0){
			i++;	
		}else{
			printf("Numero par!\nDigite um numero impar.\n");
			getch();
		}
		printf("Digite outro valor impar:\n");
		scanf("%d", &v[i]);
	}
	
	srand(time(NULL));//função para evitar a repetição do número aleatório
	random = ((rand()%50)/10);//número aleatório que vai ser inserido no vetor para escolher uma das entradas
	num = v[random];
	
	printf("\nQuadrado perfeito da matriz %d x %d\n\n", num,num);//mostra na tela qual a matriz lxc que será mostrada
	meio = num/2;
	int mat[num][num];//criando a matriz
	int max = num-1; // variável que define o valor máximo para as linhas e colunas
	
	for(int i = 0;i<num;i++){//preenche a matriz com zeros
		for(int j=0; j<num;j++)
			mat[i][j] = 0;	
	}
	
	for(int i=0; i<num*num;i++){		
		if(cont == 1){//regra 1 - coloca o 1 no meio da primeira linha
				l = 0;
				c = meio;
				mat[l][c] = cont;
			}else{
				if(l<0 && c>=0){// regra 2 - se a linha for = -1 = a linha recebe o valor máximo
					l = max;
					mat[l][c] = cont;
					}else{
						if(c<0 && l>=0){// regra 3 - se a coluna for = -1 a coluna recebe o valor máximo
							c = max;
							mat[l][c] = cont;	
						}else{
							if(mat[l][c] > 0){//regra 4 - verifica se o espaço lxc está vazio(igual a 0)
								l+=2;
								c++;
								mat[l][c] = cont;
							}else{
								if(l<0 && c<0){//regra 5 - verifica se linha e coluna são = -1 e faz o ajuste
									l+= 2;
									c++;
									mat[l][c] = cont;	
								}else{
									mat[l][c] = cont;// não tem regra, matriz corre na diagonal de baixo para cima da direita para esquerda
								}		
							}
						}
					}		
				}
		cont++;//incrementa contador
		l--;//decrementa linha
		c--;//decrementa coluna
	}
	
    for(int i = 0;i<num;i++){//laço para mostrar o quadrado perfeito
		for(int j=0; j<num;j++){
			printf("|%.2d|",mat[i][j]);	
		}
		printf("\n");
	}			
getch();	
}
