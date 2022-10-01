#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int valor, contA, contB, contC, contD, contE, contF, contG;
	contA = contB = contC = contD = contE = contF = contG = 0;
	
	printf("Digite um valor: ");
	scanf("%d", &valor);
	
	while( valor > 0){
		
		if(valor >= 100){
			contA++;z
			valor -= 100;
		}else{
			if(valor >= 50){
				contB++;
				valor-=50;
			}else{
				if(valor >= 20){
					contC++;
					valor-=20;
				}else{
					if(valor >= 10){
						contD++;
						valor-=10;
					}else{
						if(valor>=5){
							contE++;
							valor -=5;
						}else{
							if(valor >=2){
								contF++;
								valor-=2;
							}else{
								if(valor>=1){
									contG++;
									valor-=1;
								}
							}
						}
					}
				}
			}
		}		
	}
	
	printf("Total de notas de 100 reais: %d \n", contA);
	printf("Total de notas de 50 reais: %d \n", contB);
	printf("Total de notas de 20 reais: %d \n", contC);
	printf("Total de notas de 10 reais: %d \n", contD);
	printf("Total de notas de 5 reais: %d \n", contE);
	printf("Total de notas de 2 reais: %d \n", contF);
	printf("Total de notas de 1 reais: %d \n", contG);
	
}
