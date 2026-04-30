#include <stdio.h>

int addVetor(int vect[]){
  for(int i =0;i<10;i++){
    printf("Digite o %dº valor: ", i+1);
    scanf("%d",&vect[i]);
  }
}

int somaVetor(int vect[]){
  int aux=0;
  for(int i=0;i<10;i++){
    aux+=vect[i];
  }
  return aux;
}

int main(){
  int numero[10] = {1,20,5,17,10,9,13,24,12,14};

  int soma = somaVetor(numero);

  printf("O valor da soma do vetor é = %d", soma );

  return 0;
}
