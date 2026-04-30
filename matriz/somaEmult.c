#include <stdio.h>

void addMatriz(int mat[][3], int m){
  for(int i =0;i<m;i++){
    for(int j=0;j<m;j++){
      printf("Adicione o valor para a posicao [%d][%d]\n",i, j);
      scanf("%d", &mat[i][j]);
    }
  }
}


void somaMatriz(int pMat[][3], int sMat[][3], int matSoma[][3], int m){
  for(int i = 0; i<m;i++){
    for(int j = 0;j<m;j++){
      matSoma[i][j] = pMat[i][j]+sMat[i][j];
    }
  }
}

void multMatriz(int pMat[][3], int sMat[][3], int matMult[][3], int m){
  int aux = 0;
  for(int i = 0;i<m;i++){
    for(int j =0;j<m;j++){
      for(int k =0;k<m;k++){
        aux += pMat[i][k]*sMat[k][j];
      }
      matMult[i][j] = aux;
    }
  }
}

void mostrarMatriz(int mat[][3], int m){
  for(int i = 0;i<m;i++){
    for(int j = 0;j<m;j++){
      printf("[%d] ", mat[i][j]);
    }
    printf("\n");
  }
}

int main(){
  int m = 3;
  int primeiraMatriz[m][m], segundaMatriz[m][m], matrizSoma[m][m], matrizMultiplicacao[m][m];

  addMatriz(primeiraMatriz, m);
  addMatriz(segundaMatriz,m);

  somaMatriz(primeiraMatriz, segundaMatriz, matrizSoma, m);
  multMatriz(primeiraMatriz, segundaMatriz, matrizMultiplicacao, m);
  
  printf("Primeira Matriz\n");
  mostrarMatriz(primeiraMatriz, m);
  printf("Segunda Matriz\n");
  mostrarMatriz(segundaMatriz, m);
  printf("Soma da matriz\n");
  mostrarMatriz(matrizSoma,m);
  printf("Multiplicacao Matriz\n");
  mostrarMatriz(matrizMultiplicacao,m);
  
  return 0;
}
