#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int num, meio, cont, l, c;
	cont = 1;
	num = 5;
	meio = num/2;
	int mat[num][num];
	int max = num-1;
	
	for(int i = 0;i<num;i++){
		for(int j=0; j<num;j++)
			mat[i][j] = 0;	
	}
	
	for(int i=0; i<num*num;i++){		
		if(cont == 1){
				l = 0;
				c = meio;
				mat[l][c] = cont;
			}else{
				if(l<0 && c>=0){
					l = max;
					mat[l][c] = cont;
					}else{
						if(c<0 && l>=0){
							c = max;
							mat[l][c] = cont;	
						}else{
							if(mat[l][c] > 0){
								l+=2;
								c++;
								mat[l][c] = cont;
							}else{
								if(l<0 && c<0){
									l+= 2;
									c++;
									mat[l][c] = cont;	
								}else{
									mat[l][c] = cont;
								}		
							}
						}
					}		
				}
		cont++;
		l--;
		c--;
	}
	
    for(int i = 0;i<num;i++){
		for(int j=0; j<num;j++){
			printf("|%.2d|",mat[i][j]);	
		}
		printf("\n");
	}	
	getch();
}
