#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int num, meio, cont;
	cont = 1;
	num = 3;
	meio = num / 2;
	int mat[num][num];
	int max = num - 1;
	int check = 0;
	
	for(int i = 0;i<num;i++){
		for(int j=0; j<num;j++){
			mat[i][j] = 0;	
		}
	}
	 int i = 0;
	//for(int i=num;i>0;i--){
		for(int j=num*num; j>=0;j--){
			if(cont == 1){
				//i = 0;
				j = meio;
				mat[i][j] = cont;
				cont++;
				check = 0;
				i--;
				j--;
			}
			
				
			if(i<0){
				i = max;
				mat[i][j] = cont;
				cont++;
				check = 0;
				i--;
				j--;
				}
			
			
			if(j<0){
				j = max;
				mat[i][j] = cont;
				cont++;
				check=0;
				}
			//i--;
			//j--;
			
			if(mat[i][j] != 0){
				i++;
				//j = max;
				mat[i][j] = cont;
				cont++;
				check=0;
				i--;
				j--;
				}	
			
			
			mat[i][j] = cont;
			cont++;
			check = 1;
			i--;
			j--;
			
			mat[i][j] = cont;
			cont++;
			check = 2;
			//i--;
			//j--;
			
			if(check == max){
				i++;
				//j = max;
				mat[i][j] = cont;
				cont++;
				check=0;	
			}
			
			i--;
			j--;
			
			if(j<0){
				j = max;
				mat[i][j] = cont;
				cont++;
				check=0;
				}
							
	//	}
	}
	
	
	







    for(int i = 0;i<num;i++){
		for(int j=0; j<num;j++){
			printf(" %d",mat[i][j]);	
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	getch();
}
