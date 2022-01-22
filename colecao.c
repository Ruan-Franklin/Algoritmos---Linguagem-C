#include <stdio.h>
/* o int no início foi adicionado depois. Representa o novo tamanho do vetor */
int append_int(int a [], int tamanho, int capacidade, int x){ /* Adiciona uma coleção a um vetor  de inteiros.    */
/* {1, 2,3} 
 0, 1, 2  a variavél tamanho armazena o índice do elemento que quero adicionar*/
  if(tamanho==capacidade){ /* tamanho igual a capacidade indica que não há espaço para um novo elemento */
    return tamanho;}	 
  a[tamanho]=x;                                                                                               /* x representa o elemento que quero adicionar */  /*abaixo, vai retornar o novo tamanho do vetor +1 */
  return tamanho+1;
} 
void print_vector(int a[], int tamanho){  /* função para imprimir o vetor */
  int i;
  for(i=0 ; i<tamanho ;++i){
    printf("O vetor no for tem o valor de %d\n",a[i]);}	
  
}

int main(){
	
  int capacidade=100, tamanho=0;  /*tamanho do array: 0 */
  int a[capacidade];  /*array com capacidade de 100 elementos */  /*abaixo, atualização da variável tamanho */
  tamanho=append_int(a,tamanho,capacidade,10);   /* adicionando o vetor "a" no append */
  print_vector(a,tamanho);
  tamanho=append_int(a,tamanho,capacidade,21);
  print_vector(a,tamanho);
  return 0;

  /* tudo isso equivale ao append do Python */
}

