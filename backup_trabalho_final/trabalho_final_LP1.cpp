#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct nodo{
	int idC;
	int cpfC;
	char nomeC[25];
  	int planoC;
	struct nodo *anterior, *prox;
}Nodo;

void inserirDuplamenteEncadeado(Nodo**inicio, int id, char nome, int cpf, int plano){
	Nodo *novo, *atual;
	novo = (Nodo*)malloc(sizeof(Nodo));
	if(novo == NULL)exit(1);
        novo->idC = id;
        novo->nomeC[25] = nome;
        novo->cpfC = cpf;
        novo->planoC = plano;
        
		novo->anterior = novo->prox = NULL;
		printf(".. %d .. ", novo->idC);
	if(*inicio == NULL){
		*inicio = novo;
		return;
	}atual =*inicio;
	printf("... %d ... ", atual->idC);
		
	while((atual->prox != NULL) && (id > atual->idC)){//para a inserção ir até ao final faz as duas perguntas
		 atual = atual->prox;
		 }
		 if((atual == *inicio) && (id < (*inicio)->idC)){
			novo->prox = *inicio;
			(*inicio)->anterior = novo;
			*inicio = novo;
		 }else if(atual->prox == NULL){
			atual->prox = novo;
			novo->anterior = atual;
		}else if (atual == *inicio){
			novo -> prox = atual;
			atual -> anterior = novo;
			*inicio = novo;
		}else{
        atual->anterior->prox = novo;
		novo->anterior = atual->anterior;
		novo->prox = atual;
		atual->anterior = novo;
		}  
}
void listaDupla(Nodo *inicio){
    Nodo *atual;
    atual = inicio;
   while(atual->prox != NULL){
   	printf("------------------------------\n");
		printf("ID: %d \n", atual->idC);
		printf("Nome: %s \n", atual->nomeC);
		printf("CPF: %d \n", atual->cpfC);
		printf("Plano: %d \n", atual->planoC);
		printf("------------------------------\n");
		atual = atual->prox;
        }
		printf("------------------------------\n");
		printf("ID: %d \n", atual->idC);
		printf("Nome: %s \n", atual->nomeC);
		printf("CPF: %d \n", atual->cpfC);
		printf("Plano: %d \n", atual->planoC);
		printf("------------------------------\n");
    }
//int retirarDuplamenteEncadeado(Nodo**inicio, int id);

int main(){
		int opc;
		int cpf = 0;
		int ident = 0;
		int plano = 0;
		char nome[25];
		
		Nodo *inicio = NULL;
		Nodo *anterior = NULL;
		Nodo *atual;

	do{
		system("cls");
		printf("Bem Vindo a Lista!\n");
		printf("1 Inserir na Lista: \n");
		printf("2 Mostrar Lista: \n");
		printf("3 Retirar: \n");
		printf("4 Sair:\n");
		printf("\n");
		scanf("%d", &opc);

		switch(opc){
			case 1:
				system("cls");
				printf("Digite o nome do cliente:\n");
				scanf(" %s", nome);
				printf("printando : %s\n", nome);
				setbuf(stdin,NULL);
				printf("Digite o CPF do cliente:\n");
				scanf("%d" , &cpf);
				printf("Digite o plano de Internet escolhido pelo cliente:\n");
				scanf("%d" , &plano);
				setbuf(stdin,NULL);
				
				ident++;
				inserirDuplamenteEncadeado(&inicio, ident, nome, cpf, plano);
				break;

            case 2:
				system("cls");
				listaDupla(inicio);
				break;
            case 3:
				system("cls");
				//printf("Digite o Valor:\n");
				//scanf("%d" , &num);
                //retirarDuplamenteEncadeado(&inicio, num);
				break;
			case 4:
				system("cls");
				break;
			default:
				printf("Numero Invalido!\n\n");
		}getch();
	}while(opc!=4);
		printf("Saindo da Fila");
	getch();
}
//void inserirDuplamenteEncadeado(Nodo**inicio, int id, char *nome, int cpf, char *plano);




    

/*int retirarDuplamenteEncadeado(Nodo**inicio, int n){
	Nodo *atual;
	if(*inicio == NULL) return 0;
		atual = *inicio;
	
	while((atual != NULL)&&(n != atual->info)){//atual->info são elementos que já estão na lista
		atual = atual->prox;

		if(atual == NULL) return 0;
		if(atual == *inicio){
			*inicio = (*inicio)->prox;//inicio se movimenta para o segundo
			(*inicio)->anterior = NULL; // transforma no inicio da lista/ anula a casa anterior
		}else if( atual -> prox == NULL){
			atual->anterior->prox = NULL;
		}else {//exclui o elemento do meio da lista, conectando o atual->anterior->prox a atual->prox
			atual->anterior->prox = atual->prox;
			atual->prox->anterior = atual->anterior;
		}
		
		free(atual);
    return 1;
    }
}


    
    

void listaDuplaVaieVolta(Nodo *inicio){
    Nodo *atual;
    atual = inicio;
   while(atual->prox != NULL){
			printf("%d ", atual->info);
    		atual = atual->prox;
        	}printf("%d ", atual->info);
       while(atual->anterior != NULL){
        	printf("%d ", atual->info);
        	atual -> prox = atual;
    		atual = atual->anterior;
        }printf("%d ", atual->info);
    }*/




