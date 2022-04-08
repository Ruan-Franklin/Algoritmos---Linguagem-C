#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int array_list_find(int x, int *list, int element){
  int i;
  for(i=0; i<x ; ++i){
    if(element==list[i]){
      return i;  /*O elemento foi encontrado.*/}
    else{
      if(element<list[i]){
        return -1; /*Fim da busca*/
	}
	}
	}
	}


int main(){
  int i, tamanho, *vetor,e,l;
  printf("Digite o tamanho do vetor ");
  scanf("%d",&tamanho);
  srand(time(NULL));
  vetor=malloc(tamanho*sizeof(int));
  if(vetor){
    printf("A memória foi alocado com sucesso!\n");
    for(i=0;i<tamanho ; ++i){
      *(vetor+i)= rand() %100;}
      for(i=0;i<tamanho;++i){
        printf("%d\n", *(vetor+i)); }
        printf("\n");}
  else{
    printf("Erro de alocação de memória, tente novamente!\n");
    }
  printf("Digite um número para procurar no vetor\n");
  e=(array_list_find);
  printf("%d\n" ,e);


  return 0;

    }

