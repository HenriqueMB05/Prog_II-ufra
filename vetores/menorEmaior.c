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

int maiorNota(int vect[]){
  int nota = -1;
  for(int i =0; i<10;i++){
    if(nota<vect[i]){
      nota = vect[i];
    }
  }
  return nota;
}

int menorNota(int vect[]){
  int nota = 11;

  for(int i =0; i<10;i++){
    if(nota>vect[i]){
      nota = vect[i];
    }

  }
  return nota;
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

  int menorNotaTurma = menorNota(notaAlunos);
  int maiorNotaTurma = maiorNota(notaAlunos);
  printf("Menor Nota da turma: %d\nMaior nota da turma: %d",menorNotaTurma, maiorNotaTurma);
  return 0;
}
