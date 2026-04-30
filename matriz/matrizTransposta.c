#include <stdio.h>

void addMatriz(int mat[][4], int tam){
  for(int i = 0;i<tam ;i++){
    for(int j = 0;j<tam;j++){
      printf("Adicione o valor da posicao [%d][%d]",i,j);
      scanf("%d", &mat[i][j]);
    }
  }
}

void matrizTransposta(int mat[][4],int transposta[][4], int tam){
  for(int i =0;i<tam;i++){
    for(int j =0;j<tam;j++){
      transposta[i][j] = mat[j][i];
    }
  }
}

void mostrarMatriz(int mat[][4], int tam){
  for(int i=0;i<tam; i++){
    for(int j =0;j<tam;j++){
      printf("[%d]",mat[i][j]);
    }
    printf("\n");
  }
}


int main(){
  int tam =4;

  int matriz[tam][tam];
  int transposta[tam][tam];

  addMatriz(matriz,tam);
  matrizTransposta(matriz, transposta, tam);

  printf("Matriz padrao\n");
  mostrarMatriz(matriz,tam);
  printf("Matriz transposta\n");
  mostrarMatriz(transposta, tam);
  return 0;
}
