#include <stdio.h>
#include <stdlib.h>
#include "vetor_int.h"
 void print_vector(int *a, int tamanho){
   int i;
   printf("{ ");
   for(i=0 ; i<tamanho ; ++i)
     printf("%d ",*(a+i));
   printf("}\n");
 }
 int main(){
   int i, erro, *a1, capacidade=10, tamanho=0;
   a1={int*} malloc(sizeof(int)*capacidade);
   for(i=0 ; i<20 ; ++i){
     append_int(a1,&tamanho,capacidade,i*3,&erro);
     if(erro){
      printf("Erro de memória! \n");
      break;
     }
   }
  printf_vector(a1,tamanho);
  free(a1);
  return 0;


