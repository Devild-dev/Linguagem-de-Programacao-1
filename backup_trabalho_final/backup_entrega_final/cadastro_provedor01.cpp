#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

typedef struct cliente{
	int idC;
	char nome[50];
	char cpf[12];
	char plano[10];
}Cliente;

typedef struct nodo{
	Cliente client;
	struct nodo *anterior, *prox;
}Nodo;

void inserirDuplamenteEncadeado(Nodo**inicio, Cliente c){
	Nodo *novo, *atual;
	novo = (Nodo*)malloc(sizeof(Nodo));
	if(novo == NULL)exit(1);
        novo->client = c;
		novo->anterior = novo->prox = NULL;
	if(*inicio == NULL){
		*inicio = novo;
		return;
	}atual = *inicio;
		
	while((atual->prox != NULL) && (c.idC > atual->client.idC)){
		 atual = atual->prox;
		}
		if((atual == *inicio) && (c.idC < (*inicio)->client.idC)){
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

void printCliente(Nodo *atual){
	printf("------------------------------\n");
	printf("ID: %d \n", atual->client.idC);
	printf("Nome: %s \n", atual->client.nome);
	printf("CPF: %s \n", atual->client.cpf);
	printf("Plano: %s \n", atual->client.plano);
	printf("------------------------------\n");	
}

void listaDupla(Nodo *inicio){
    Nodo *atual;
    atual = inicio;
   while(atual->prox != NULL){
		printCliente(atual);
		atual = atual->prox;
        }
        printCliente(atual);
}

//b = 0 - consultar | b = 1 - alterar
int consultaCliente(Nodo**inicio, int c, Cliente novo, int b){
	Nodo *atual;
	if(*inicio == NULL) return 0;
		atual = *inicio;
	while(atual != NULL){
		if(atual->client.idC == c){
			if(b == 0){
				printCliente(atual);
			}else{
				strcpy(atual->client.nome,novo.nome);
				strcpy(atual->client.cpf,novo.cpf);
				strcpy(atual->client.plano,novo.plano);
			}
			return -1;	
		}
		atual = atual->prox;
	}		
	return 1;		
}

int main(){
		int cont, opc, num, check;
		Cliente cli;
		cli.idC = 0;		
		Nodo *inicio = NULL;
		Nodo *anterior = NULL;
		Nodo *atual;

	do{
		system("cls");
		printf("CADASTRO DE CLIENTES - PROVEDOR SUPERNET\n");
		printf("1 Inserir Clientes: \n");
		printf("2 Consultar Cliente: \n");
		printf("3 Alterar Dados: \n");
		printf("4 Mostrar Clientes: \n");
		printf("5 Sair: \n");
		printf("\n");
		scanf("%d", &opc);

		switch(opc){
			case 1:
				cli.idC++;
				system("cls");
				printf("Digite o nome do cliente:\n");
				setbuf(stdin,NULL);
				gets(cli.nome);
				printf("Digite o CPF do cliente:\n");
				setbuf(stdin,NULL);
				gets(cli.cpf);
				printf("Digite o plano do cliente:\n");
				setbuf(stdin,NULL);
				gets(cli.plano);
				inserirDuplamenteEncadeado(&inicio, cli);
				break;
            case 2:
				system("cls");
				printf("Digite o ID do cliente desejado:\n");
				scanf("%d", &num);
				check = consultaCliente(&inicio, num, cli, 0);
				if(check != -1){
					printf("ID nao encontrado!");
				}
				break;
			case 3:
				system("cls");
				printf("Digite o ID do cliente desejado:\n");
				scanf("%d", &num);
				check = consultaCliente(&inicio, num, cli, 1);
				if(check != -1){
					printf("ID nao encontrado!");
				}else{
					printf("Digite a alteracao do nome do cliente:\n");
					setbuf(stdin,NULL);
					gets(cli.nome);
					printf("Digite a alteracao do CPF do cliente:\n");
					setbuf(stdin,NULL);
					gets(cli.cpf);
					printf("Digite a alteracao do plano do cliente:\n");
					setbuf(stdin,NULL);
					gets(cli.plano);
					consultaCliente(&inicio, num, cli, 1);
				}
				break;
			case 4:
				system("cls");
				listaDupla(inicio);
				break;
			case 5:
				system("cls");
				break;
			default:
				printf("Entrada Invalida!!!\n\n");
		}getch();
	}while(opc!=5);
		printf("Saindo do programa de cadastro de clientes!");
	getch();
}


