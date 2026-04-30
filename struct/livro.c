#include <stdio.h>
#include <string.h>

struct Livro{
  char titulo[50];
  char autor[50];
  float preco;
};

void addLivro(struct Livro *l){
  printf("Digite o titulo do livro: ");
  fgets(l->titulo, 50, stdin);
  strtok(l->titulo, "\n");
  printf("Digite o nome do autor: ");
  fgets(l->autor, 50, stdin);
  strtok(l->autor, "\n");
  printf("Digite o preco do Livro: R$");
  scanf("%f", &l->preco);
}

void mostrarLivro(struct Livro l){
  printf("Titulo: %s\nAutor: %s\nPreco: R$%.2f", l.titulo,l.autor,l.preco);
}

int main(){
  struct Livro l1;

  addLivro(&l1);
  mostrarLivro(l1);

  return 0;
}
