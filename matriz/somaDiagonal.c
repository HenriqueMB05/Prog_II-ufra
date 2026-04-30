#include <stdio.h>

void addMatriz(int mat[][3], int  tam){
  for(int i =0;i<tam;i++){
    for(int j =0;j<tam;j++){
      printf("Digite um numero para posicao [%d][%d] :", i, j);
      scanf("%d", &mat[i][j]);
    }
  }
}

int somaDiagonal(int mat[][3], int tam){
  int aux=0;
  for(int i=0;i<tam;i++){
    aux+=mat[i][i];
  }
  return aux;
}


int main(){
  int mat[3][3];

  addMatriz(mat, 3);
  int somaD = somaDiagonal(mat, 3);
  printf("A soma da diagonal da matriz e %d", somaD);

  return 0;
}
