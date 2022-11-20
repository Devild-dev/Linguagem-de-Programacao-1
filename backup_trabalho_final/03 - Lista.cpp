#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct nodo{
	int info;
	struct nodo *anterior, *prox;
}Nodo;

void inserirDuplamenteEncadeado(Nodo**inicio, int n);
int retirarDuplamenteEncadeado(Nodo**inicio, int n);
void listaDupla(Nodo*inicio);


int main(){
		int num, opc;
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
				printf("Digite o Valor:\n");
				scanf("%d" , &num);
				inserirDuplamenteEncadeado(&inicio, num);
				listaDupla(inicio);
				break;

            case 2:
				system("cls");
				listaDupla(inicio);
				break;
            case 3:
				system("cls");
				printf("Digite o Valor:\n");
				scanf("%d" , &num);
                retirarDuplamenteEncadeado(&inicio, num);
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

void inserirDuplamenteEncadeado(Nodo**inicio, int n){
	Nodo *novo, *atual;
	novo = (Nodo*)malloc(sizeof(Nodo));
	if(novo == NULL)exit(1);
        novo->info = n;
		novo->anterior = novo->prox = NULL;
		printf(".. %d .. ", novo->info);
	if(*inicio == NULL){
		*inicio = novo;
		return;
	}atual =*inicio;
	printf("... %d ... ", atual->info);
		
	while((atual->prox != NULL) && (n > atual->info)){//para a inserção ir até ao final faz as duas perguntas
		 atual = atual->prox;
		 }
		 if((atual == *inicio) && (n < (*inicio)->info)){
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

int retirarDuplamenteEncadeado(Nodo**inicio, int n){
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

void listaDupla(Nodo *inicio){
    Nodo *atual;
    atual = inicio;
   while(atual->prox != NULL){
		printf("%d ", atual->info);
		atual = atual->prox;
        }printf("%d ", atual->info);
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
    }




