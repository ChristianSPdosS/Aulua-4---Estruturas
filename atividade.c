  /*01- a) Crie uma estrutura Pet, com os seguintes atributos:
nome,
idade,
raca,
sexo
b) Solicite ao usuário para inserir os dados do pet.
c) Imprimir os valores do pet na tela.
*/

#include <stdio.h>

typedef unsigned int uint;
  
  typedef struct Pet{
 char nome[100];
uint idade;
char raca[50];
char sexo; 
} t_pet;

int main(){

  t_pet pet1;
  printf("Nome do pet: \n");
scanf("%[^\n]%*c" , pet1.nome);
  printf("Idade do pet:\n");
  scanf("%u" , &pet1.idade);
  printf("Raça do pet:\n");
  getchar();
  scanf("%[^\n]%*c" , pet1.raca);
  printf("Sexo do pet:\n");
  scanf("%[^\n]%*c" , &pet1.sexo);

  printf(" *------------------------------*\n Nome: %s\n Idade: %u\n Raça: %s\n Sexo: %c\n *------------------------------*\n" , pet1.nome, pet1.idade, pet1.raca, pet1.sexo);
  


  








  return 0;
}