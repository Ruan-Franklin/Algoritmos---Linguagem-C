#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
int main(){
  int option, value, previous;
  Node *list = NULL;
  do{
    printf("\n\t0 - Sair\n\t 1 -Função Insert_start\n\t 2 - Função Insert_end\n\t 3 - Função insert_at \n\t 4 - Função print_vector\n");
    scanf("%d", &option);
    switch(option){
    case 1:
      printf("Digite um valor: ");
      scanf("%d", &value);
      linked_list_insert_start(&list, value);
      break;
    case 2:
      printf("Digite um valor: ");
      scanf("%d", &value);
      linked_list_insert_end(&list, value);
      break;
    case 3:
      printf("Digite um valor e o valor de referencia: ");
      scanf("%d%d", &value, &previous);
      linked_list_insert_at(&list, value, previous);
      break;
    case 4:
      linked_list_print_vector(list);
      break;
    default:
        if(option != 0)			
	  printf("Opcao invalida!\n");
	  }
 }while(option != 0);						
 return 0;
										}



