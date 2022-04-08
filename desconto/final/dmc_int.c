#include <stdio.h>
#include <stdlib.h>
#include "dmc_int.h"
struct linked_list_int *linked_list_int_create(){
  struct linked_list_int *new_list=(struct linked_list_int*)malloc(sizeof(struct linked_list_int));
  new_list->first=0;
  new_list->last=0;
  return new_list;
  }


unsigned int linked_list_int_size(struct linked_list_int *list){
  unsigned int s=0;
  struct linked_list_node_int* current = list -> first;
  while(current !=0){
    s++;
    current=current->next;}
  return s; //s é a quantidade de elementos disponíveis na lista
  }
  
  int linked_list_find(int linked_list_int, *list){
  int element;
  int i;
  for(i=0 ; i<linked_list_int ; i++){
    if(element==list[i]){
      return i;} //O elemento foi encontrado
    else{
    if(element<list[i]){
      return -1; //Fim da busca
     }
     }
     }  
void print_list(struct linked_list_int *list){
  struct linked_node_int *current=list->first;
  printf("Essa é a lista: ");
  while(current!=0){
    printf("%d ->",current->value);
    current=current->next;
    }
  printf("Null\n");

     }
void linked_list_int_insert_start(struct linked_list_int *list, int x){
  struct linked_list_node_int *new_node = (struct linked_list_node_int*) malloc(sizeof(struct linked_list_node_int));
new_node->value = x;
new_node->next=list->first; /* O segundo elemento será o que era o primeiro */
list->first=new_node;
       }

        
  
 

