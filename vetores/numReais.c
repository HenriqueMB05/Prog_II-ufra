#include <stdio.h>

void addVect(float vect[]){
  for(int i =0; i<5;i++){
  printf("Digite um número: ");
    scanf("%f", &vect[i]);
  }
}

void verificarNumNegativo(float vect[]){
  for(int i =0;i<5;i++){
    if(vect[i]<0){
      printf("%.1f ",vect[i]);
    }
  }
}

int main(){
  float numerosReais[5];
  
  addVect(numerosReais);
  verificarNumNegativo(numerosReais);

    return 0;
}
