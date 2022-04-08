#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
typedef struct node{
  int value;
  struct node *next;
  }Node;
  /* procedimento para inserir no início */
void linked_list_insert_start(Node **list, int n){
  Node *new_node = malloc(sizeof(node));
  if(new_node){
    new_node->value = n;
    new_node->next = *list;
    *list = new_node;	 
     }
  else	
    printf("Erro ao alocar memoria!\n");  
    }
   /* procedimento para inserir no fim */

void linked_list_insert_end(Node **list, int n){   
  Node *aux, *new_node = malloc(sizeof(node));
  if(new_node){
    new_node->value = n;
    new_node->next = NULL;
    /* Se for o primeiro elemento */
    if(*list == NULL)
      *list = new_node;
    else{
      aux = *list;
      while(aux->next){
          aux=aux->next;
      aux->next=new_node;
	 }
	 }
	 }
   else{
     printf("Erro ao alocar a memória, tente novamente!\n");
     }
}

// insert função insert at

void linked_list_insert_at(Node **list, int n, int prev){
  Node *aux, *new_node = malloc(sizeof(Node));
  if(new_node){
    new_node->value = n;
    /* Se for o primeiro elemento */
    if(*list == NULL){
      new_node->next = NULL;
      *list = new_node;}
    else{
      aux = *list;
      while(aux->value != prev && aux->next)
         aux = aux->next;
      new_node->next = aux->next;
      aux->next = new_node;
      }
}
  else{
    printf("Erro ao alocar memoria!\n");
    }
    }


void linked_list_print_vector(Node *node){
  printf("\n\tLista: ");
  while(node){
    printf("%d ", node->value);
    node = node->next;
    }			
  printf("\n\n");
		}										


