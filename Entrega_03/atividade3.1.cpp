#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define TAM_Q 10

struct tipoAluno{
	int ID;
	char respostas[TAM_Q];
	int nota;
};

float porcent(float a, int t);
int  frequencia(tipoAluno *a, int t);

int main(){
	int inicio = 9996;
	int fim = 9999;
	int total = fim-inicio;
	float aprovados = 0;
	char gabarito[TAM_Q] = {'a','a','a','a','a','a','a','a','a','a'};
	tipoAluno alunos[total];
	int maiorF = 0;
	float porcentagem;
	int id = inicio+1;
	int nota = 0;
	
	for(int i=0;i<total;i++){
		alunos[i].ID = id;
		nota = 0;
		for(int j=0;j<TAM_Q;j++){
			printf("Digite a %da resposta do %do aluno:\n", j+1, i+1);
			scanf(" %c", &alunos[i].respostas[j]);
			setbuf(stdin,NULL);		
			if(alunos[i].respostas[j] == gabarito[j]){	
				nota++;
				alunos[i].nota = nota;
			}					
		}	
		system("cls");
	    id++;	
	}
	
	for(int i=0;i<total;i++){
		if(alunos[i].nota >= 6){
			aprovados++;
		}
	}

	porcentagem = porcent(aprovados, total);
	maiorF = frequencia(alunos, total);
	
	for(int i=0;i<total;i++)
		printf("A nota do aluno de ID: %d eh %d \n", alunos[i].ID , alunos[i].nota);
		
	printf("A quantidade de alunos aprovados: %.0f\n", aprovados);
	printf("Porcentagem de aprovados: %.0f%%\n", porcentagem);
	printf("O total de alunos eh: %.0d\n", total);
	printf("A nota de maior frequencia eh: %d", maiorF);
	getch();
}

float porcent(float a, int t){
	float p;
	p = (a/t)*100;
	return p;
}

int  frequencia(tipoAluno *a, int t){
	int f[TAM_Q+1];
	int maior = 0;
	int aux = 0;
	
	for(int i=0;i<=TAM_Q;i++){//preenche a vetor com zeros
		f[i] = 0;
	}
	for(int i=0;i<t;i++){	
		for(int j=0;j<=TAM_Q;j++){									
			if(a[i].nota == j){
				f[j]++;
			}
					
		}	
	}
	
	for(int i=0;i<=TAM_Q;i++){
		if(f[i] > aux){
			maior = i;
			aux = f[i];	
		}
	}
	return maior;	
}

