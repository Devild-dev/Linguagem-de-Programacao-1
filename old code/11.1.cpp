#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int num, meio, cont, a, b;
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
	
	for(int i=0; i<num*num;i++){	
		
		if(cont == 1){
				a = 0;
				b = meio;
				mat[a][b] = cont;
				check = 0;
				cont++;
				a--;
				b--;
			}else{
				if(a<0){
						a = max;
						mat[a][b] = cont;
						check = 0;
						cont++;
						a--;
						b--;
				}else{
					if(b<0){
					b = max;
					mat[a][b] = cont;
					check=0;
					cont++;
					a--;
					b--;
					}else{
						
						if(mat[a][b] != 0){
						a+=2;
						b++;
						mat[a][b] = cont;
						cont++;
						check=0;
						}
						
						
					}
				}	
			}
		}
		
    for(int i = 0;i<num;i++){
		for(int j=0; j<num;j++){
			printf(" %d",mat[i][j]);	
		}
		printf("\n");
	}
	
	getch();
}
