#include <stdio.h>

void addNota(int vect[]){
  int num =0;
  for(int i=0;i<10;i++){
    do{
      printf("Digite a nota do aluno %d\n", i+1);
      scanf("%d", &num);
    }while(num>10);
    vect[i]=num;
  }
}


float mediaTurma(int vect[]){
  int aux=0;
  for(int i=0;i<10;i++){
    aux+=vect[i];
  }
  return aux/10;
}

int main(){
  int notaAlunos[10];
  
  addNota(notaAlunos);
  float mediaDaTurma = mediaTurma(notaAlunos);

  printf("%f", mediaDaTurma);
  return 0;
}
