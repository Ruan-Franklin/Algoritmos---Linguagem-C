/*Autor: Ruan Franklin */
#ifndef __LINKED_LIST_VOID__
#define __LINKED_LIST_VOID__
struct Node{    /*Nó de lista ligada */
   int value;
   struct node *next;
};
void linked_list_insert_start(Node **list, int n);   /*Função para inserir no inicio da lista ligada */
void linked_list_insert_end(Node **list, int n);  /*Função para inserir no final da lista ligada */
void linked_list_insert_at(Node **list, int n, int prev);     /*Função para inserir elementos na lista ligada a partir de index  */
void linked_list_print_vector(Node *node);
 /* Função para imprimir os elementos desejados */
#endif
  
