#include <stdio.h>

void addMatriz(int mat[][4], int tam){
  for(int i = 0;i<tam;i++){
    for(int j =0;j<tam;j++){
      printf("Adicionae um valor para [%d][%d] :", i, j);
      scanf("%d", &mat[i][j]);
    }
  }
}

void mediaLinha(int mat[][4], int tam ){
  int somaLinha=0;
  float mLinha;

  for(int i =0;i<tam;i++){
    for(int j=0;j<tam;j++){
      somaLinha+=mat[i][j];
    }
    mLinha = somaLinha/tam;
    printf("A media da linha [%d] = %.1f\n", i, mLinha);

    mLinha = 0;
    somaLinha = 0;
  }
}

int main(){
  int matriz[4][4];

  int tam =4;

  addMatriz(matriz, tam);
  mediaLinha(matriz, tam);

  return 0;
}
