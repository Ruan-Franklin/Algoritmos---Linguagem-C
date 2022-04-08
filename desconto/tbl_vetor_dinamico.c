#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int i, tamanho, *vetor;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tamanho);
  srand(time(NULL));
  vetor = malloc(tamanho*sizeof(int));
  if(vetor){
    printf("A memória foi alocada com sucesso!\n");
    for(i=0;i<tamanho;i++){
      *(vetor+i) = rand() % 100;}	
    for(i=0;i< tamanho; i++){	
      printf("%d ", *(vetor+i));}						       printf("\n");
      }		
  else{
    printf("Erro de  alocação de memória, tente novamente.\n");							}									
  return 0;

 }
