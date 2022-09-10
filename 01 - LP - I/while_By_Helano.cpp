#include <iostream>

int main() {
  float nota, media, maior, menor;
  int cont = 0;
  float soma = 0;

  printf("Primeira nota \n");
  scanf("%f", &nota);

  while (nota != -1)
  {
    if (nota >=0 && nota <= 10)
    {
      soma = soma + nota;
      cont++;
      
      if (cont == 1)
      {
        maior = nota;
        menor = nota;
      }

      if (nota > maior)
        maior = nota;
      if (nota < menor)
        menor = nota;
      
    }
    else
    {
      printf("Nota invalida");
    }
    printf("Proxima nota \n");
    scanf("%f", &nota);
  }

  if (cont > 0)
  {
    media = soma/cont;
    printf("Media = %f \n", media);
    printf("Maior = %f \n" , maior);
    printf("Menor = %f \n" , menor);
  }
  else
    printf("Nao tivemos notas \n");
  
}
