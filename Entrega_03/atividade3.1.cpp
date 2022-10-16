#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define TAM_Q 10

struct tipoAluno{
	int ID;
	char respostas[TAM_Q];
	int nota=0;
};

int main(){
	int inicio = 9997;
	int fim = 9999;
	float total = fim-inicio;
	float aprovados = 0;
	char gabarito[TAM_Q] = {'a','a','a','a','a','a','a','a','a','a'};
	tipoAluno alunos[2];
	int frequencia[TAM_Q+1];
	
	int aux = inicio+1;
	for(int i=0;i<total;i++){
		alunos[i].ID = aux;
		
		for(int j=0;j<TAM_Q;j++){
			printf("Digite a %da resposta do %do aluno:\n", j+1, i+1);
			scanf("%c", &alunos[i].respostas[j]);
			setbuf(stdin,NULL);			
			if(alunos[i].respostas[j] == gabarito[j]){	
				alunos[i].nota++;
			}		
		}	
		system("cls");
	    aux++;	
	}
	
	for(int i=0;i<total;i++){
		printf("A nota do aluno de ID: %d eh %d \n", alunos[i].ID , alunos[i].nota);
	}
	
	for(int i=0;i<total;i++){
		if(alunos[i].nota >= 6){
			aprovados++;
		}
	}
	
	float porcentagem = (aprovados/total)*100;
	printf("A quantidade de alunos aprovados: %.0f\n", aprovados);
	printf("Porcentagem de aprovados: %.0f%%\n", porcentagem);
	printf("O total de alunos eh: %.0f\n", total);
	
	for(int i=0;i<11;i++){//preenche a vetor com zeros
		frequencia[i] = 0;
	}
	
	for(int i=0;i<total;i++){
		for(int j=0;j<=TAM_Q;j++){		
			if(alunos[i].nota == j){
				frequencia[j]++;
			}		
		}		
	}
	
	for(int j=0;j<=TAM_Q;j++){
		printf("Frequencia da nota %d eh %d\n",j, frequencia[j]);
	}
	getch();
}
