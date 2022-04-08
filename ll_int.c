#include <stdio.h>
#include <stdlib.h>
#include "ll_int.h"
struct ll_int *ll_int_create(){
struct ll_int *new_list=(struct ll_int*)malloc(sizeof(struct ll_int));
  new_list->first=0;
  new_list->last=0;
  return new_list;
  }
void ll_int_inserir_inicio(struct ll_int *list, int x){

   struct ll_node_int *new_node = (struct ll_node_int*) malloc(sizeof(struct ll_node_int));
   new_node->value = x;
   new_node->next=list->first; /* O segundo elemento será o que era o primeiro */
   list->first=new_node;
   }
unsigned int ll_int_size(struct ll_int *list){
  unsigned int s=0;
  struct ll_node_int* current = list->first;
  while (current!=0){
    s++;
    current=current->next;}
  return s; /* quantidade de elementos na lista */
  }
void print_list(struct ll_int *list){
  struct ll_node_int *current = list->first;
  printf("Lista: ");
  while(current != 0){
    printf("%d -> ", current->value);
    current = current -> next;
    }
  printf("NULL\n");
  }


