#include <stdio.h>

void addMatriz(int mat[][5], int tam ){
  for(int i =0;i<tam;i++){
    for(int j =0; j<tam; j++){
      printf("Adicione o valor para posicao [%d][%d] :",i,j);
      scanf("%d", &mat[i][j]);
    }
  }
}

int somaInferior(int mat[][5], int tam){
  int soma=0;
  for(int i=0;i<tam;i++){
    for(int j=0;j<tam;j++){
      if(i>j) soma+=mat[i][j];
    }
  }
  return soma;
}


int main(){
  int mat[5][5];
  int soma;

  addMatriz(mat, 5);
  soma = somaInferior(mat, 5);
  printf("A soma dos valores abaixo da diagonal da matriz e %d", soma);
  return 0;
}
