#include <stdio.h>


typedef unsigned int uint;

typedef struct {
int dia, mes, ano;
}t_data;

typedef struct{
char nomer[100];
char des[500];
t_data validade;
}t_produto;
  
  typedef struct Pessoa{
 char nome[100];
uint idade;
char sexo; //'M', 'F'
char cpf[11];
  } t_pessoa;

typedef struct{
int n1, n2;
}t_numbers;



int main(void) {
 struct Pessoa p1, v_p[10];
  //Atribuição de valores na declaração
t_pessoa ana = {"Ana", 23, 'F', "12345678912"};

  t_pessoa beto= {
  .nome = "Beto",
  .idade = 64,
  .sexo = 'M',
  .cpf = "1112223344"
  };

  printf("Altere a idade da Ana, insira um número: \n");

  scanf("%u" , &ana.idade);

  /*01- a) Crie uma estrutura Pet, com os seguintes atributos:
nome,
idade,
raca,
sexo
b) Solicite ao usuário para inserir os dados do pet.
c) Imprimir os valores do pet na tela.
*/

  t_produto produto = {
.nome = "Biscoito",
  .desc= ""
  

    };
  
produto.validade.dia = 05;
  produto.validade.mes= 03;
  produto.validade.ano= 2021;






  
  return 0;
}