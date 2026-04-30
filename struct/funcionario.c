#include <stdio.h>
#include <string.h>

struct Funcionario{
  char nome[50];
  int idade;
  float salario;
};

void addFuncionario(struct Funcionario *f){
  printf("Nome do funcionario: ");
  fgets(f->nome, 50, stdin);
  strtok(f->nome, "\n");
  printf("Idade do funcionario: ");
  scanf("%d", &f->idade);
  printf("Salario do funcionario: R$");
  scanf("%f", &f->salario);
}


void mostratFuncionario(struct Funcionario *f){
  printf("\n\n\n");

  printf("Nome: %s\n", f->nome);
  printf("Idade: %d\n", f->idade);
  printf("Salario: R$%.2f\n", f->salario);
}


int main(){
  struct Funcionario f;

  addFuncionario(&f);
  mostratFuncionario(&f);


  return 0;
}
