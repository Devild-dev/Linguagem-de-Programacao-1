#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct padraoHora{
	int hora = 0;
	int min = 0;
	int seg = 0;	
};

struct material{
	float massa = 0.0;
	int tempo = 0;
};

material mat(float m);
padraoHora horario(int t);

int main(){	
	float massaInicial = 0.0;
	material massaFinal;
	padraoHora hora;
	
	printf("Digite o peso da massa inicial:\n");
	scanf("%f", &massaInicial);
	
	massaFinal = mat(massaInicial);
	hora = horario(massaFinal.tempo);
	
	printf("Massa final = %.2f \n", massaFinal.massa);
	printf("Tempo = %.2d:%.2d:%.2d", hora.hora, hora.min, hora.seg); 
	
	getch();
}

material mat(float m){
	material mf;
	mf.massa = m;
	do{
		mf.tempo += 50;
		mf.massa /= 2;	
	}while(mf.massa > 0.5);	
	return mf;
}

padraoHora horario(int t){
	int aux = t;
	padraoHora h;
	for(int i=0;i<t;i++){	
		if(aux % 60 == 0){
			h.min++;
		}
		if(aux % 3600 == 0){
			h.hora++;
		}	
		aux--;
	}
	h.seg = t%60;		
	return h;
}

