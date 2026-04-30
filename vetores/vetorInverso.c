#include <stdio.h>

void addVetor(int vect[]){
  for(int i =0;i<10;i++){
    print("Digite o valor para a posicao %dº: ");
    scanf("%i"&vect[i]);
  }
}

void inverterVetor(int vect[], int inverso[]){
  int j=9;
  for(int i =0;i<10;i++){
    inverso[i] = vect[j-i];
  }
}

void mostrarVetor(int vect[]){
  for(int i =0;i<10;i++) print("%d ", vect[i]);
  /*for(int i=9;i>-1;i--) printf("%d", vect[i])
   *Essa linha ignora a criação de uma função inversa, mas eu quero fazer isso kkkk;
   * */
}


int main(){
  int vect[10];
  int vectInverso[10];

  mostrarVetor(vect);
  inverterVetor(vect, vectInverso);
  mostrarVetor(vectInverso);
  return 0;
}
